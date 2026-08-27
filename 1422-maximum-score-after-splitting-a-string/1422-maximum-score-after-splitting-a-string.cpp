class Solution {
private:
    int countZeroesOnLeft(string str, int index) {
        int counter = 0;
        for(int i = 0; i < index; i++) {
            if(str[i] == '0'){
                counter++;
            }
        }
        return counter;
    }

    int countOnesOnRight(string str, int index) {
        int counter = 0;
        for(int i = index; i < str.size(); i++) {
            if(str[i] == '1') {
                counter++;
            }
        }
        return counter;
    }
public:
    int maxScore(string s) {
        int max = INT_MIN;

        for(int i = 1; i < s.size(); i++) {
            int zeroes = countZeroesOnLeft(s, i);
            int ones = countOnesOnRight(s, i);

            int temp = zeroes + ones;
            max = (max > temp) ? max : temp;
        }

        return max;
    }
};