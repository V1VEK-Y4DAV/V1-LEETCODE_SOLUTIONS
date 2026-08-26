class Solution {
private:
    void generateSubsets(vector<int>& arr, int index,vector<int>& current,vector<vector<int>>& result){

    if (index == arr.size()) {
        result.push_back(current);
        return;
    }

    // Include current element
    current.push_back(arr[index]);
    generateSubsets(arr, index + 1, current, result);

    // Backtrack
    current.pop_back();

    // Exclude current element
    generateSubsets(arr, index + 1, current, result);
}
public:
    int subsetXORSum(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> result;

        generateSubsets(nums, 0, current, result);       

        int ans = 0;
        for(int i = 0; i < result.size(); i++) {
            int tempXOR = 0;
            for(int j = 0; j < result[i].size(); j++) {
                tempXOR = tempXOR ^ result[i][j];
            }
            ans += tempXOR;
        }
        return ans;
    }
};