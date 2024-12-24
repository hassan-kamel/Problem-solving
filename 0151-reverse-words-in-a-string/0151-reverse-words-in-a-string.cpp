class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0, j = 0;
        while (j < n) {
            while (j < n && s[j] == ' ')
                j++;
            if (j < n && i > 0)
                s[i++] = ' ';
            int start = i;
            while (j < n && s[j] != ' ')
                s[i++] = s[j++];
            reverse(s.begin() + start, s.begin() + i);
        }
        s.resize(i);
        reverse(s.begin(), s.end());
        return s;
    }
};