class Solution {
public:
    int findPivot(vector<int> nums){
        int low = 0;
        int high = nums.size() - 1;

        if(nums[nums.size() - 1] > nums[0]){
            return 0;
        }
        while(low < high){
            int mid = low + (high - low)/2;

            if(nums[mid] >= nums[0]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return high;
    }
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        int low, high;

        if(target >= nums[pivot] && target <= nums[nums.size() - 1]){
            low = pivot;
            high = nums.size() - 1;
        }
        else{
            low = 0;
            high = pivot - 1;
        }

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
};