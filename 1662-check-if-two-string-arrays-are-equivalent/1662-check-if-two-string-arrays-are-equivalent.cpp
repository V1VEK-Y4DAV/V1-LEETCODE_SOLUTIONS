class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "";
        string str2 = "";

        for(int i = 0; i < word1.size(); i++) {
            for(int j = 0; j < word1[i].size(); j++) {
                str1 += word1[i][j];
            }
        }

        for(int i = 0; i < word2.size(); i++) {
            for(int j = 0; j < word2[i].size(); j++) {
                str2 += word2[i][j];
            }
        }

        return str1 == str2;
    }
};