class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;

        while(x || y) {
            bool x_bit, y_bit;
            if(x > 0){
                x_bit = (x&1);
            }
            else{
                x_bit = 0;
            }


            if(y > 0){
                y_bit = (y&1);
            }
            else{
                y_bit = 0;
            }

            if(x_bit != y_bit) {
                count++;
            }
            x >>= 1;
            y >>= 1;
        }
        return count;
    }
};