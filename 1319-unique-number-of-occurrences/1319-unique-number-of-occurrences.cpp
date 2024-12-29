class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        unordered_set<int> set;

        for (int el : arr)
            map[el]++;

        for (const auto& pair : map)
            set.insert(pair.second);

        return map.size() == set.size();
    }
};