class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map <string, int> mp;
        for (string st:strs) {
            string res = "";
            for (int i = 0; i < st.length(); ++i) {
                res += st[i];
                mp[res]++;
            }
        }

        string ans = ""; int mx = 0;
        for (auto x : mp) if (x.second == strs.size()) {
            if (mx < x.first.length()) {
                ans = x.first;
                mx = x.first.length();
            }
        }
        return ans;
    }
};