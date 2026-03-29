class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] == val) {
                swap(nums[left], nums[right]);
                right--;  // shrink size
            } else {
                left++;   // keep element
            }
        }
        return right + 1;
    }
};