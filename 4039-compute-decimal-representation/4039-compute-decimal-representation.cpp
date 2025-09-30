class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        int i = 0;
        while (n) {
            if (n % 10 != 0)
                res.push_back((n % 10) * (pow(10, i)));
            n /= 10;
            i++;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};