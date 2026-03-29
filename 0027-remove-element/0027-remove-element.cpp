class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size() - 1;

        while(left < right){
            if(nums[left] == val){
                swap(nums[left], nums[right]);
                right--;
            }
            else{
                left++;
            }
        }
        return right + 1;
    }
};