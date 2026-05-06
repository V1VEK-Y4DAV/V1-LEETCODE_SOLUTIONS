class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);

        for(int i = 0; i < n; i++){
            if(i - 1 < 0){
                left[i] = 0;
            }
            else{
                left[i] = left[ i - 1] + nums[i - 1];
            }
        }

        for(int i = n - 1; i >= 0; i--){
            if(i + 1 > n - 1){
                right[i] = 0;
            }
            else{
                right[i] = right[ i + 1] + nums[i + 1];
            }
        }
        
        
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            res[i] = abs(left[i] - right[i]);
        }

        return res;
    }
};