class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len = nums.size();
        unordered_map<int, int> map;
        for (int i = 0; i < len; i++) {
            if (map[nums[i]] > 0 && (((i + 1) - map[nums[i]]) <= k)) {
                return true;
            }
            map[nums[i]] = i + 1;
        }

        return false;
    }
};