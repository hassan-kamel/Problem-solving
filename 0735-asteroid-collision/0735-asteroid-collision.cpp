class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for (int aster : asteroids) {
            while (!stk.empty() && aster < 0 && stk.top() > 0) {
                if (abs(aster) > stk.top())
                    stk.pop();
                else if (abs(aster) == stk.top()) {
                    stk.pop();
                    aster = 0;
                } else
                    aster = 0;
            }
            if (aster != 0)
                stk.push(aster);
        }

        vector<int> result;
        while (!stk.empty()) {
            result.push_back(stk.top());
            stk.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};