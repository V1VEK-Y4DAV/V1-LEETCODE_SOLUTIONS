class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;

        for(int i = 0; i < nums.size(); i++){
            p.push(nums[i]);
        }
        int result = -1;
        for(int j = 0; j < k; j++){
            result = p.top();
            p.pop();
        }
        return result;
    }
};