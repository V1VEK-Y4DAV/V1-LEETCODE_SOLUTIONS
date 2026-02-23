class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2){
            return n;
        }
        int a = 0;
        int b = 1;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            ans = a + b;
            a = b;
            b = ans;
        }
        return ans;
    }
};