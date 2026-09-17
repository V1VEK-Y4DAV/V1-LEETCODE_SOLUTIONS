class Solution {
public:
    int maxPower(string s) {
        if(s.size() == 1) return 1;
        int max = 0;
        int curr = 1;

        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == s[i+1]) {
                curr++;
            }
            else{
                curr = 1;
            }
            // cout << i << " -> " << curr << endl;
            if(max < curr) {
                max = curr;
            }
        }

        return max;
    }
};