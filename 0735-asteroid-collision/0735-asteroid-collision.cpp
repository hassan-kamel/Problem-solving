class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        for (int aster : asteroids) {
            while (!result.empty() && aster < 0 && result.back() > 0) {
                if (result.back() < -aster) {
                    result.pop_back();
                    continue;
                } else if (result.back() == -aster) {
                    result.pop_back();
                }
                aster = 0; // Mark current asteroid as destroyed
                break;
            }
            if (aster != 0) result.push_back(aster);
        }
        return result;
    }
};
