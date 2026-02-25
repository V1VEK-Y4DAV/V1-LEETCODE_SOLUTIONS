class Solution {
public:
    int countPrimes(int n) {
        if(n <= 1){
            return 0;
        }
        // if( n == 2){
        //     return 0;
        // }

        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        int count = 0;

        for(int i = 0; i < n; i++){
            if(prime[i]){
                count++;
                for(int j = 2 * i; j <= n; j += i){
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};