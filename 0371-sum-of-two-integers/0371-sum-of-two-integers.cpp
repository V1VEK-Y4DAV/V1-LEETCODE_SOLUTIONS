class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        while (b != 0) {
        carry = a & b;  // Calculate the carry
        a = a ^ b;      // Calculate the sum without carry
        b = carry << 1; // Shift the carry to the left
    }
    return a;
    }
};