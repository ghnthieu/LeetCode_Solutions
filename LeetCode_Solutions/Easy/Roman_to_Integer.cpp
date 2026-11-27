class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> mp;
        mp['I'] = 1; mp['V'] = 5; mp['X'] = 10; mp['L'] = 50;
        mp['C'] = 100; mp['D'] = 500; mp['M'] = 1000;

        int ans = 0, i = 0;
        while (i < s.length()) {
            if (i < s.length() - 1 && s[i] == 'I' && s[i + 1] == 'V') {
                ans += 4;
                i += 2;
                continue;
            }

            if (i < s.length() - 1 && s[i] == 'I' && s[i + 1] == 'X') {
                ans += 9;
                i += 2;
                continue;
            }
            
            if (i < s.length() - 1 && s[i] == 'X' && s[i + 1] == 'L') {
                ans += 40;
                i += 2;
                continue;
            }

            if (i < s.length() - 1 && s[i] == 'X' && s[i + 1] == 'C') {
                ans += 90;
                i += 2;
                continue;
            }

            if (i < s.length() - 1 && s[i] == 'C' && s[i + 1] == 'D') {
                ans += 400;
                i += 2;
                continue;
            }

            if (i < s.length() - 1 && s[i] == 'C' && s[i + 1] == 'M') {
                ans += 900;
                i += 2;
                continue;
            }
            
            ans += mp[s[i]];
            ++i;
        }
        return ans;
    }
};