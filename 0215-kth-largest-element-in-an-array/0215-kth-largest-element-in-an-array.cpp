class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        for (int num : nums)
            maxHeap.push(num);
            
        while (!maxHeap.empty() && --k)
            maxHeap.pop();

        return maxHeap.top();
    }
};