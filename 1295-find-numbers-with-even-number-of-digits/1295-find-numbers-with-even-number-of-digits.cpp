class Solution {
private:
    int countDigit(int num) {
        int counter = 0;
        while(num > 0) {
            counter++;
            num /= 10;
        }
        return counter;
    }
public:
    int findNumbers(vector<int>& nums) {
        int counter = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(countDigit(nums[i]) % 2 == 0) {
                counter++;
            }
        }
        return counter;
    }
};