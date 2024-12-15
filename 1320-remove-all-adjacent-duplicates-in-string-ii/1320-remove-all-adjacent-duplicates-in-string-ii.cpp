class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> stk;
        for (int i = 0; i < s.size(); ++i) {
            if (!stk.empty() && stk.top().first == s[i]) {
                auto newPair = make_pair(stk.top().first, stk.top().second + 1);
                stk.pop();
                stk.push(newPair);

            } else
                stk.push(make_pair(s[i], 1));

            // cout<<stk.top().first << " - " << stk.top().second<<endl;
            
            if(stk.top().second == k) stk.pop();
        }

        string res = "";
        while (!stk.empty()) {
            int ch_k = stk.top().second;
            while (ch_k--)
                res += (stk.top().first);
            stk.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};