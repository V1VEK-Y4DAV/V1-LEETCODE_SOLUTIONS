class Solution {
public:
    int secondHighest(string s) {
        vector<int> vec;

        int index = 0;
        while(index < s.size()){
            if(isdigit(s[index])){
                int num = s[index] - '0';
                vec.push_back(num);
            }
            index++;
        }

        set<int> st(vec.begin(), vec.end());
        vector<int> nums(st.begin(), st.end());

        if(nums.size() >= 2){
            return nums[nums.size() - 2];
        }
        return -1;
    }
};