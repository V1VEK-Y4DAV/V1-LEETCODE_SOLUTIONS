class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<char> allowedVector;
        for(int i = 0; i < allowed.size(); i++) {
            allowedVector.push_back(allowed[i]);
        }

        int counter = 0;
        for(int i = 0; i < words.size(); i++) {
            bool flag = true;
            for(int j = 0; j < words[i].size(); j++) {
                if(!(find(allowedVector.begin(), allowedVector.end(), words[i][j]) != allowedVector.end())){
                    flag = false;
                    break;
                }
            }
            if(flag) {
                counter++;
            }
        }
        return counter;
    }
};