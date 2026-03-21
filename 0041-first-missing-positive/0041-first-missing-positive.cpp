class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        if(max < 1){
            return 1;
        }
        sort(nums.begin(), nums.end());
        for(int i = 1; i <= max; i++){
            if(!binary_search(nums.begin(), nums.end(), i)){ // used binary search instead of trivial find function to avoid TLEs.
                return i;
            }
        }
        return max + 1;
    }
};