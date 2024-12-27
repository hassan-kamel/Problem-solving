class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        unordered_map<int, int> map;

        for (int num1 : nums1)
            map[num1] = 1;
        for (int i = 0; i < nums2.size(); i++) {
            if (map[nums2[i]] > 0) {
                map[nums2[i]] = map[nums2[i]] + 1;
                nums2.erase(nums2.begin() + i);
                i--;
            }else
                map[nums2[i]] = map[nums2[i]] + 1;
        }
        for (int j = 0; j < nums1.size(); j++) {
            if (map[nums1[j]] > 1) {
                nums1.erase(nums1.begin() + j);
                j--;
            } else
                map[nums1[j]] = map[nums1[j]] + 1;
        }

        return {nums1, nums2};
    }
};