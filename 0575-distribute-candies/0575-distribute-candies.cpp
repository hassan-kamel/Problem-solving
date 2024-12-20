class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int> candy_set;
        for (int candy : candyType) {
            candy_set.insert(candy);
        };
        return min(n / 2, (int)candy_set.size());
    }
};