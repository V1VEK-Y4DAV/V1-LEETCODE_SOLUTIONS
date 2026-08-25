class Solution {
public:
    int xorOperation(int n, int start) {
        int num = 0;
        int counter = 0;
        while(counter < n) {
            num ^= start;
            start += 2;
            counter++;
        }
        return num;
    }
};