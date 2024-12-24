class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string current_word = "";
        for (char ch : s) {
            if (ch == ' ') {
                if (current_word.size() > 0) {
                    result = result.size() ? current_word + ' ' + result
                                           : current_word;
                    current_word = "";
                }
            } else {
                current_word += ch;
            }
        }

        return (current_word.size() > 0
                    ? result.size() ? current_word + ' ' + result : current_word
                    : result);
    }
};