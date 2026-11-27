class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long rev = 0, res = x;
        while (res) {
            rev = (rev * 10) + (res % 10);
            res /= 10;
        }
        return (rev == x);
    }
};