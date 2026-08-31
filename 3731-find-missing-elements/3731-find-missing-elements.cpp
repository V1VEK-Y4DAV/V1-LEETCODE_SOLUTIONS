class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int low = *min_element(nums.begin(), nums.end());
        int high = *max_element(nums.begin(), nums.end());

        vector<int> vec;
        for(int i = low; i <= high; i++) {
            if(find(nums.begin(), nums.end(), i) == nums.end()) {
                vec.push_back(i);
            }
        }
        return vec;
    }
};