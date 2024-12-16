class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, pair<int, int>> nums_hash;
        int index = 0;
        for (int num : nums) {
            auto it = nums_hash.find(num);
            if (it != nums_hash.end() && nums_hash[num].first + num == target &&
                nums_hash[num].second != index) {
                result = {nums_hash[num].second, index};
                break;
            }

            int complete = target - num;
            cout << complete << endl;
            nums_hash[complete] = {num, index};

            index++;
        }

        return result;
    }
};