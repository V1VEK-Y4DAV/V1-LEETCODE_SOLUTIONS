// A string is called a happy prefix if is a non-empty prefix which is also a suffix (excluding itself).

// Given a string s, return the longest happy prefix of s. Return an empty string "" if no such prefix exists.

// Example 1:

// Input: s = "level"
// Output: "l"
// Explanation: s contains 4 prefix excluding itself ("l", "le", "lev", "leve"), and suffix ("l", "el", "vel", "evel"). The largest prefix which is also suffix is given by "l".
// Example 2:

// Input: s = "ababab"
// Output: "abab"
// Explanation: "abab" is the largest prefix which is also suffix. They can overlap in the original string.
 

// Constraints:

// 1 <= s.length <= 105
// s contains only lowercase English letters.


class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        vector<int>lps(n,0);
        int prevLps=0,i=1;
        while(i<n){
            if(s[i]==s[prevLps]){
                lps[i]=prevLps+1;
                prevLps+=1;
                i+=1;
            }
            else if(prevLps==0){
                lps[i]=0;
                i+=1;
            }
            else{
                prevLps=lps[prevLps-1];
            }
        }
        int m=lps[n-1];
        return s.substr(0,m);
    }
};