class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> binaryVector;

        int remainder = 0;
        for(int i = 0; i < nums.size(); i++) {
            remainder = (remainder * 2 + nums[i]) % 5;

            binaryVector.push_back(remainder == 0);
        }

        return binaryVector;
    }
};