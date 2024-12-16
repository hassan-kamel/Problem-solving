class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k--) {
            int small_index = 0, smallest = nums[0];

            for (int i = 0; i < nums.size(); i++) {
                if (smallest > nums[i]) {
                    smallest = nums[i];
                    small_index = i;
                }
            }

            nums[small_index] *= multiplier;
        }

        return nums;
    }
};