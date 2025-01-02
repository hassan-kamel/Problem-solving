class SmallestInfiniteSet {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    unordered_map<int, int> removed;

public:
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++)
            minHeap.push(i);
    }

    int popSmallest() {
        int top = minHeap.top();
        minHeap.pop();
        removed[top] = 1;
        return top;
    }

    void addBack(int num) {
        if (removed[num] == 0)
            return;
        minHeap.push(num);
        removed[num] = 0;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */