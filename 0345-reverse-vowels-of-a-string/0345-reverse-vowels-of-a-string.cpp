class Solution {
public:
    string reverseVowels(string s) {
        int len = s.size(), i = 0, j = len - 1;
        string vowels = "aeiouAEIOU";
        while (i < j && i <= len && j >= 0) {
            if (vowels.find(s[i]) == string::npos)
                i++;
            else if (vowels.find(s[j]) == string::npos)
                j--;

            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};