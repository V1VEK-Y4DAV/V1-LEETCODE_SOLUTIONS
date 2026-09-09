class Solution {
private:
    bool isPrime(int num) {
        if(num == 0 || num == 1) return false;
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) return false;
        }
        return true;
    }

    int setBits(int num) {
        int counter = 0;
        while(num > 0) {
            if(num & 1) counter++;
            num >>= 1;  
        }
        return counter;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int counter = 0;
        for(int i = left; i <= right; i++) {
            int count_of_setBits = setBits(i);
            if(isPrime(count_of_setBits)) counter++;
        }
        return counter;
    }
};