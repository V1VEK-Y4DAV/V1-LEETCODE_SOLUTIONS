// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

// Example 2:
// Input: nums = [4,1,2,1,2]
// Output: 4

// Example 3:
// Input: nums = [1]
// Output: 1

//----------------------------------------------------------------------------------------------------------------------------------------

// this solution gives better beats
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans ^= nums[i]; //here XOR operator is being used 
        }
        return ans;
    }
};

//----------------------------------------------------------------------------------------------------------------------------------------

// this is brute force also don't forget to import or add algorithm

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(count(nums.begin(),nums.end(),nums[i])==1){
                return nums[i];
            }
        }
        return -1;
    }
};