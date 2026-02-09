class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int org = x;
        long long reversenum = 0;
        while(x > 0){
            int num = x % 10;
            reversenum  = reversenum * 10 + num;
            x /= 10;
        }
        return reversenum == org;
    }
};