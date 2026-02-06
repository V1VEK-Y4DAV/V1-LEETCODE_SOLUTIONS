class Solution {
public:
    bool is_possible(vector<int> nums, int k, int mid){
        int fake_k = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(sum + nums[i] <= mid){
                sum +=nums[i];
            }
            else{
                fake_k++;
                sum = nums[i];
                if(fake_k > k || nums[i] > mid){
                    return false;
                }
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        if(n < k){
            return -1;
        }

        int low = 0;
        int high = accumulate(nums.begin(), nums.end(), 0);

        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(is_possible(nums, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }   
};