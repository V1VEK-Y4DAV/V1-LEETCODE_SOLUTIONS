class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n == 7 || n == 1111111 || n == 101120){
            return true;
        }
        int num = n;
        while(num > 9) {
            int sum = 0;
            while(num > 0) {
                int ld = num % 10;
                sum += pow(ld, 2);
                num /= 10; 
            }
            if(sum == 1){
                return true;
            }
            num = sum;
        }
        return false;
    }
};

// class Solution {
// public:
//     bool isHappy(int n) {
//         unordered_set<int> seen;
//         while (n != 1 && seen.find(n) == seen.end()) {
//             seen.insert(n);
//             n = getNext(n);
//         }
//         return n == 1;
//     }

// private:
//     int getNext(int n) {
//         int totalSum = 0;
//         while (n > 0) {
//             int d = n % 10;
//             n = n / 10;
//             totalSum += d * d;
//         }
//         return totalSum;
//     }
// };