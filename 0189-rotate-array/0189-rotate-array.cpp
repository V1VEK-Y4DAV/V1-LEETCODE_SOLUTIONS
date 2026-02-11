class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> temp(size);

        for(int i = 0; i < size; i++){
            temp[(i + k) % size] = nums[i];
        }

        for(int i = 0; i < size; i++){
            nums[i] = temp[i];
        }
    }
};