class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morsecode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        set<string> comparing;
        for(int i = 0; i < words.size(); i++) {
            string temp = "";
            for(int j = 0; j < words[i].size(); j++) {
                int index = words[i][j] - 'a';
                temp += morsecode[index];
            }
            comparing.insert(temp);
        }

        // traversing to check
        // for(auto x: comparing) {
        //     cout << x << " ";
        // }

        // int counter = 0;
        // for(int i = 0; i < comparing.size(); i++) {
        //     for(int j = i+1; j < comparing.size(); j++) {
        //         if(comparing[i] == comparing[j]){
        //             counter++;
        //         }
        //     }
        // }
    
        return comparing.size();
    }
};