class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if they have non-zero GCD string.
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int a = str1.size();
        int b = str2.size();

        // loop (divide) until you find the
        // highest common factor (length of string)
        // like we did in maths
        while (b) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return str1.substr(0, a);
    }
};