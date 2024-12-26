class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0, num_of_match = 0;
        for (int i = 0; i < s.size(); i++) {
            while (j < t.size()) {
                if (s[i] == t[j]) {
                    num_of_match++;
                    j++;
                    break;
                }
                j++;
            }
        }

        return (num_of_match == s.size());
    }
};