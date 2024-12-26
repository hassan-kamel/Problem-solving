class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;                           // Pointer for t
        for (int i = 0; i < s.size(); i++) { // Pointer for s
            while (j < t.size() && s[i] != t[j]) {
                j++;
            }
            if (j == t.size())
                return false; // Exhausted t without matching s[i]
            j++;              // Move t pointer after matching
        }
        return true;
    }
};
