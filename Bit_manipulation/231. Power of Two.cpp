// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2^x.
// Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:
// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:
// Input: n = 3
// Output: false
// Constraints:
// -2^31 <= n <= 2^31 - 1

//----------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        int count = 0;
        while(n){
            n = n&(n-1);
            count++;
        }
        return count==1;
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==-2147483648) return false;
        bitset<32> pot(n);
        return pot.count()==1;
    }
};

