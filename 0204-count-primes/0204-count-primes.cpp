class Solution {
public:
    vector<int> prime_vec(int n){
        vector<int> prime(n+1, 1);

        for(int i = 2; i <= n; i++){
            for(int j = 2 * i; j <= n; j+=i){
                prime[j] = 0;
            }
        }
        return prime;
    }
    int countPrimes(int n) {
        vector<int> res = prime_vec(n);
        int count = 0;

        for(int i = 2; i < n; i++){
            if(res[i] == 1){
                count++;
            }
        }
        return count;
    }
};