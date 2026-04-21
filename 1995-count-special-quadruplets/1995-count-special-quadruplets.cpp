class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int counter = 0;
        int n = nums.size();
        for(int  i = 0 ;i < n - 1; i++){
            for(int j = i + 1; j < n - 1; j++){
                for(int k = j + 1; k < n - 1; k++){
                    for(int l = k + 1; l < n; l++){
                        int a = nums[i];
                        int b = nums[j];
                        int c = nums[k];
                        int d = nums[l];
                        if(a + b + c == d){
                            counter++;
                        }
                    }
                }
            }
        }
        return counter;
    }
};