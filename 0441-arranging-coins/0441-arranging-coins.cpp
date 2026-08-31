class Solution {

public:
    int arrangeCoins(int n) {
        int counter = 1;
        long coins = 1;
        while(coins <= n) {
            counter++;
            coins += counter;
        }
        return counter - 1;
    }
};