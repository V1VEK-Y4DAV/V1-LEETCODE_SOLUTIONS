class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<char> charsVector;
        for(int i = 0; i < chars.size(); i++) {
            charsVector.push_back(chars[i]);
        }

        vector<string> wordsVector;
        for(int i = 0; i < words.size(); i++) {
            string temp = words[i];
            bool flag = true;

            // for(int j = 0; j < words[i].size(); j++) {
            //     if(!(find(charsVector.begin(), charsVector.end(), words[i][j]) != charsVector.end())){
            //         flag = false;
            //         break;
            //     }
            // }

            vector<char> tempChars = charsVector;

            for(int j = 0; j < words[i].size(); j++) {

                auto it = find(tempChars.begin(), tempChars.end(), words[i][j]);

                if(it == tempChars.end()) {
                    flag = false;
                    break;
                }

                // Remove the character after using it
                tempChars.erase(it);
            }
            if(flag) wordsVector.push_back(temp);
        }

        int counter = 0;
        for(auto x: wordsVector) {
            counter += x.size();
        }

        return counter;
        
    }
};


