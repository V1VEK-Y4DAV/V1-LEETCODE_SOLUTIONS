class Solution {
public:
    void helper(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }

        // Exclude
        helper(nums, output, index + 1, ans);

        // Include
        int element = nums[index];
        output.push_back(element);
        helper(nums, output, index + 1, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        helper(nums, output, 0, ans);
        return ans;
    }
};