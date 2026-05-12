class Solution {

private:
    vector<int> findPrimeFactors(long long n) {
        vector<int> ans;
        // 1. Handle factors of 2
        while (n % 2 == 0) {
            ans.push_back(2);
            n /= 2;
        }
        // 2. Handle odd factors from 3 to sqrt(n)
        for (int i = 3; i <= sqrt(n); i += 2) {
            while (n % i == 0) {
                ans.push_back(i);
                n /= i;
            }
        }
        // 3. If n is still > 2, it is prime
        if (n > 2) {
            ans.push_back(n);
        }

        return ans;
    }
public:
    bool isUgly(int n) {
        if(n <= 0){
            return false;
        } 
        vector<int> temp = findPrimeFactors(n);

        for(int i = 0; i < temp.size(); i++){
            if(temp[i] != 2 && temp[i] != 3 && temp[i] != 5){
                return false;
            }
        }
        return true;
    }
};