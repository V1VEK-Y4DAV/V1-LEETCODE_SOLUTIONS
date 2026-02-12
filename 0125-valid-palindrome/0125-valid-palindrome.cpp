class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.length() - 1;

        while(low < high){
            if( low < high && !isalnum(s[low])){
                    low++;
                    continue;
            }
            if( low < high && !isalnum(s[high])){
                    high--;
                    continue;
            }
            if(tolower(s[low++]) != tolower(s[high--])){
                return false;
            }
        }
        return true;
    }
};
