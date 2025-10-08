class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> nums2;
        for (int i = 0; i < nums.size(); ++i) {
            int j = i + 1;
            nums2.push_back(nums[i]);
            while (j < nums.size() && nums[j] == nums[i])
                j++;
            i = j - 1;
        }

        nums = nums2;

        return nums.size();
    }
};
