class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int sum = 0, best = A[0];
        for (int i = 0; i < A.size(); i++) {
            sum = max(A[i], A[i] + sum);
            best = max(best, sum);
        }
        return best;
    }
};