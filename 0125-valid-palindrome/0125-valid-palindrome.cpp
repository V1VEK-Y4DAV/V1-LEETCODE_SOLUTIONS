class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.length() - 1;

        while(low < high){
            while( low < high && !isalnum(s[low])){
                    low++;
            }
            while( low < high && !isalnum(s[high])){
                    high--;
            }
            if(tolower(s[low++]) != tolower(s[high--])){
                return false;
            }
        }
        return true;
    }
};
