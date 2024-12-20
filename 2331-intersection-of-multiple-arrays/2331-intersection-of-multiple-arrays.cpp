class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int len = nums.size();
        unordered_map<int, int> map;
        vector<int> result;
        for (vector<int> v : nums)
            for (int num : v) {
                map[num]++;
                if (map[num] == len)
                    result.push_back(num);
            }
        sort(result.begin(), result.end());

        return result;
    }
};