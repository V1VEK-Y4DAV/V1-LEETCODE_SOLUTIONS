class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<char> vowels = {'A','E','I','O','U','a','e','i','o','u'};
        vector<string> vec;
        stringstream ss(sentence);

        string word;

        while(ss >> word) {
            vec.push_back(word);
        }

        for(int i = 0; i < vec.size(); i++) {
            for(int j = 0; j < vec[i].size(); j++) {
                if(j == 0 && (find(vowels.begin(), vowels.end(), vec[i][j]) != vowels.end())){
                    vec[i] += "ma";
                }
                else if(j == 0 && !(find(vowels.begin(), vowels.end(), vec[i][j]) != vowels.end())){
                    char character = vec[i][j];
                    vec[i].erase(vec[i].begin() + j);
                    vec[i] += character;
                    vec[i] += "ma";
                }
            }
            for(int k = 0; k <= i; k++) {
                vec[i] += 'a';
            }
        }

        string str = "";
        for(int i = 0; i < vec.size(); i++) {
            for(int j = 0; j < vec[i].size(); j++) {
                str += vec[i][j];
            }
            if(i != vec.size() - 1) str += ' ';
        }

        return str;
    }
};