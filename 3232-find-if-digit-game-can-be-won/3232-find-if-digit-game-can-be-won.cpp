class Solution {
private:
    bool countDigit(int num) {
        int counter = 0;
        while(num > 0) {
            counter++;
            num /= 10;
        }
        return counter == 1;
    }
public:
    bool canAliceWin(vector<int>& nums) {
        int one = 0;
        int two = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(countDigit(nums[i])) {
                one += nums[i];
            }
            else{
                two += nums[i];
            }
        }
        return one != two;
    }
};