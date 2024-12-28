class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk; // Stack to handle asteroid collisions
        for (int aster : asteroids) {
            if (!stk.empty()) {
                if (stk.top() > 0) {
                    if (aster > 0)
                        stk.push(aster); // Both are moving right
                    else {
                        // Collision: Current asteroid moving left
                        while (!stk.empty() && (aster * -1) > stk.top() &&
                               stk.top() > 0) {
                            stk.pop(); // Current asteroid destroys the top
                        }
                        if (!stk.empty() && (aster * -1) == stk.top())
                            stk.pop(); // Both destroy each other
                        else if (aster != 0 && (stk.empty() || stk.top() < 0))
                            stk.push(aster); // Current asteroid survives
                    }
                } else {
                    stk.push(aster); // No conflict with left-moving asteroid
                }
            } else
                stk.push(aster); // Stack is empty
        }

        vector<int> result;
        while (!stk.empty()) {
            result.push_back(stk.top());
            stk.pop();
        }

        reverse(result.begin(), result.end()); // Reverse to get correct order
        return result;
    }
};
