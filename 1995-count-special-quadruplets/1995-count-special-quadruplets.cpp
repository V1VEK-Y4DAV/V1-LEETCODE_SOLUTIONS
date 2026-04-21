class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int counter = 0;
        int n = nums.size();
        for(int  i = 0 ;i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
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