class Solution {
private:
    vector<int> digits(int index) {
        vector<int> res;
        while(index > 0) {
            int ld = index % 10;
            res.push_back(ld);
            index /= 10;
        }
        return res;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++) {
            vector<int> vec = digits(i);
            bool flag = true;
            for(int j = 0; j < vec.size(); j++) {
                if(vec[j] == 0) {
                    flag = false;
                    break;
                }
                else if(i % vec[j] != 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};