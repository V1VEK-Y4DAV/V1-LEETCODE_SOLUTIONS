class Solution {
private:
    int digitSum(int n) {
        int sum = 0;
        while(n > 0) {
            int ld = n % 10;
            sum += ld;
            n /= 10;
        }
        return sum;
    }
public:
    int countEven(int num) {
        int counter = 0;
        for(int i = 1; i <= num; i++) {
            if(digitSum(i) % 2 == 0) {
                counter++;
            }
        }
        return counter;
    }
};