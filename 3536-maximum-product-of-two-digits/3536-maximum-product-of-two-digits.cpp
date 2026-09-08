class Solution {
public:
    int maxProduct(int n) {
        int first_max = INT_MIN;
        int sec_max = INT_MIN;

        while(n > 0) {
            int ld = n % 10;
            if(ld > first_max) {
                sec_max = first_max;
                first_max = ld;
            }
            else if(ld > sec_max) {
                sec_max = ld;
            }
            n /= 10;
        }
        return first_max * sec_max;
    }
};