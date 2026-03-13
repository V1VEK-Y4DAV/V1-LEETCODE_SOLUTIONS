class Solution {
public:
    void reverse(vector<int>& vec){
        int low = 0;
        int high = vec.size() - 1;
        while(low < high){
            swap(vec[low++], vec[high--]);
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        int sum = 0;
        int carry = 0;
        int index = digits.size() - 1;
        vector<int> ans;
        while(index >= 0 || carry){
            sum = carry;
            if(index == digits.size() - 1){
                sum = sum + carry + digits[index] + 1;
            }

            if(index >= 0 && index < digits.size() - 1){
                sum = sum + digits[index];
            }

            ans.push_back(sum % 10);
            carry = sum / 10;
            index--;
        }
        reverse(ans);
        return ans;
    }
};