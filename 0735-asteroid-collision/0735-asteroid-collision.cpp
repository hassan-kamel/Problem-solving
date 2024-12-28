class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for (int aster : asteroids) {
            if (!stk.empty()) {
                if (stk.top() > 0) {
                    if (aster > 0)
                        stk.push(aster);
                    else {
                        while (!stk.empty() && (aster * -1) > stk.top() &&
                               stk.top() > 0) {
                            stk.pop();
                        }
                        if (!stk.empty() && (aster * -1) == stk.top())
                            stk.pop();
                        else if (aster != 0 && (stk.empty() || stk.top() < 0))
                            stk.push(aster);
                    }
                } else {
                    stk.push(aster);
                }
            } else
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