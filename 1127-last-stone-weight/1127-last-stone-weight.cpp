class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for (int stone : stones)
            maxHeap.push(stone);
        while (maxHeap.size() > 1) {
            int top = maxHeap.top();
            maxHeap.pop();
            int top2 = maxHeap.top();
            maxHeap.pop();
            if (top - top2 > 0)
                maxHeap.push(top - top2);
        }

        if (maxHeap.size())
            return maxHeap.top();
        else
            return 0;
    }
};