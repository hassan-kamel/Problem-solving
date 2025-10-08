class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        sort(potions.begin(), potions.end());
        vector<int> result;
        int n = potions.size();

        for (int spell : spells) {
            if (spell >= success) {
                result.push_back(n);
                continue;
            }
            auto it = lower_bound(potions.begin(), potions.end(),
                                  (long long)ceil((double)success / spell));

            // cout <<  << endl;
            if (it == potions.end())
                result.push_back(0);
            else
                result.push_back(n - (it - potions.begin()));
        }
        return result;
    }
};