class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = 0;
        int n = 0;

        while(m < s.size() && n < t.size()) {
            if(s[m] == t[n]) {
                m++;
            }
            n++;
        }

        return m == s.size();
    }
};