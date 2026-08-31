class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> vec;
        for(int i = 1; i <= num/2; i++) {
            if(num % i == 0) {
                vec.push_back(i);
            }
        }
        int sum = 0;
        for(int i = 0; i < vec.size(); i++) {
            sum += vec[i];
        }
        return sum == num;
    }
};