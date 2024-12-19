class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff,
                                       int valueDiff) {
        set<int> set_window;
        int len = nums.size();

        for (int i = 0; i < len; i++) {
            auto wanted = set_window.lower_bound(nums[i] - valueDiff);
            if (wanted != set_window.end() && *wanted <= nums[i] + valueDiff) {
                return true;
            }

            set_window.insert(nums[i]);
            if (set_window.size() > indexDiff)
                set_window.erase(nums[i - indexDiff]);
        }
        return false;
    }
}

;