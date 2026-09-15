class Solution {
public:
    int commonFactors(int a, int b) {
        int counter = 0;
        int less = (a < b) ? a : b;
        for(int i = 1; i <= less; i++) {
            if(a % i == 0 && b % i == 0) {
                counter++;
            }
        }
        return counter;
    }
};