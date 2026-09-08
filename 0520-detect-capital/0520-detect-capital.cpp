class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() == 1) {
            return true;
        }
        int capitalCounter = 0;
        for(int i = 0; i < word.size(); i++) {
            int num = word[i];
            if(num >= 65 && num <= 90) {
                capitalCounter++;
            }
        }

        if(capitalCounter == 1) {
            int num = word[0];
            if(num >= 65 && num <= 90) {
                return true;
            }
        }
        else if(capitalCounter == word.size()){
            return true;
        }
        else if(capitalCounter == 0) {
            return true;
        }
        else {
            return false;
        }
        // cout
        return false;
    }
};