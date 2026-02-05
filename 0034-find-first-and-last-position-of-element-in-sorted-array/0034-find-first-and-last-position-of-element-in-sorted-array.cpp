class Solution {
public:
    int f_occ(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int f = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                f = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return f;
    }
    int l_occ(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int l = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                l = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> occurrence;
        int fst = f_occ(nums, target);
        int lst = l_occ(nums, target);

        occurrence.push_back(fst);
        occurrence.push_back(lst);

        return occurrence;
    }
};