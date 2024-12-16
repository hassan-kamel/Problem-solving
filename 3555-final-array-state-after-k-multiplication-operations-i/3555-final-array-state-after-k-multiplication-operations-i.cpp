
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        // Min-heap to store elements and their indices
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>>
            minHeap;

        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i], i});
        }

        while (k--) {
            // Extract the minimum element
            auto [minValue, index] = minHeap.top();
            minHeap.pop();

            // Update the element in the array and heap
            nums[index] *= multiplier;
            minHeap.push({nums[index], index});
        }

        return nums;
    }
};
