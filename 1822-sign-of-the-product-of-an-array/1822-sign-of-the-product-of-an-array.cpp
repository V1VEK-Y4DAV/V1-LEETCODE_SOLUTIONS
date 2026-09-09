class Solution {
public:
    int arraySign(vector<int>& nums) {
        int num = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0) {
                num *= -1;
            }
            else if(nums[i] == 0) {
                num *= 0;
            }
        }

        if(num < 0){
            return -1;
        }
        else if(num > 0) {
            return 1;
        }

        return 0;
        
    }
};