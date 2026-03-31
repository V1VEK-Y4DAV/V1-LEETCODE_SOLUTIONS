class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int it:nums){
            s.insert(it);
        }

        vector<int> num;
        for(int it : s){
            num.push_back(it);
        }
        int max = *max_element(num.begin(), num.end());
        if(num.size() < 3){
            return max;
        }
        int max2 = INT_MIN;
        for(int i = 0; i < num.size(); i++){
            if(num[i] < max && num[i] > max2){
                max2 = num[i];
            }
        }

        int max3 = INT_MIN;
        for(int i = 0; i < num.size(); i++){
            if(num[i] < max2 && num[i] > max3){
                max3 = num[i];
            }
        }
        return max3;
    }
};