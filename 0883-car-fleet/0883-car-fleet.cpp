class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (size_t i = 0; i < position.size(); ++i) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<>());

        stack<double> fleets;
        // fleets.push(((double)target - cars[0].first) / cars[0].second);
        for (size_t i = 0; i < cars.size(); ++i) {
            double curr = (double)(target - cars[i].first) / cars[i].second;
            // cout << curr << ":" << fleets.top() << endl;
            if (fleets.empty() || curr > fleets.top()) {
                fleets.push(curr);
            }

            // cout << fleets.size() << endl;
        }

        return fleets.size();
    }
};
