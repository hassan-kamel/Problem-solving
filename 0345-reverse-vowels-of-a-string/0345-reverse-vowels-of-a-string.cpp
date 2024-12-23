class Solution {
public:
    string reverseVowels(string s) {
        vector<int> indices;
        vector<char> vowels;
        unordered_set<char> vowelSet = {'a', 'e', 'i', 'o', 'u',
                                        'A', 'E', 'I', 'O', 'U'};

        // Collect vowels and their positions
        for (int i = 0; i < s.size(); i++) {
            if (vowelSet.find(s[i]) != vowelSet.end()) {
                indices.push_back(i);
                vowels.push_back(s[i]);
            }
        }

        // Reverse the vowels
        reverse(vowels.begin(), vowels.end());

        // Replace in original string
        for (int k = 0; k < indices.size(); k++) {
            s[indices[k]] = vowels[k];
        }

        return s;
    }
};
