class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int, int> freq;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int num = 0;
        for(auto it: freq) {
            if(it.second == 2) {
                num ^= it.first;
            }
        }

        return num;
    }
};