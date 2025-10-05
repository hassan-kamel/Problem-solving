class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        string result = "";

        for (size_t i = 0; i < word.size(); ++i) {
            st.push(word[i]);
            if (word[i] == ch) {
                while (!st.empty()) {
                    result += st.top();
                    st.pop();
                }
                result += word.substr(i + 1);
                return result;
            }
        }

        return word;
    }
};