class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase = true;
        bool decrease = true;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                decrease = false;
            }

            if (nums[i] > nums[i + 1]) {
                increase = false;
            }
        }

        return increase || decrease;
        // if(nums.size() <= 2){
        //     return true;
        // }

        // if(nums[0] < nums[nums.size() - 1]){
        //     int index = 0;
        //     while(index < nums.size() - 1){
        //         if(nums[index] > nums[index + 1]){
        //             return false;
        //         }
        //         index++;
        //     }
        // }
        // else if(nums[0] > nums[nums.size() - 1]){
        //    int index = 0;
        //     while(index < nums.size() - 1){
        //         if(nums[index] < nums[index + 1]){
        //             return false;
        //         }
        //         index++;
        //     }
        // }
        // else{
        //     return true;
        // }

        // return true;
    }
};