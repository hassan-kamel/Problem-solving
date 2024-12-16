class Solution {
    vector<int> ns;

public:
    int integerToDigits(int num) {
        vector<int> digits;
        int digitsSum;
        while (num > 0) {
            int digit = num % 10;
            int el = digit * digit;
            digits.push_back(el);
            digitsSum += el;
            num /= 10;
        }

        return digitsSum;
    }

    bool isHappy(int n) {
        auto it = std::find(ns.begin(), ns.end(), n);
        if (n == 1)
            return true;
        if (it != ns.end())
            return false;
        ns.push_back(n);
        int digitsSum = integerToDigits(n);

        return isHappy(digitsSum);
    }
};