class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.size(), len2 = str2.size();
        string base = len1 > len2 ? str2 : str1;

        while(true){
            if(isGCD(base,str1) && isGCD(base,str2)) return base;
            else if(base.size()== 1) return "";
            else base = base.substr(0,base.size()-1);
        }

        return "";
    }

    bool isGCD(string base, string str) {
        if (str.size() % base.size() == 0) {
            int k = str.size() / base.size();
            string result = "";
            while (k--)
                result += base;
            if (str == result)
                return true;
        }

        return false;
    }
};