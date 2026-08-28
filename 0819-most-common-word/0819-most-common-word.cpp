class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
    
        for (char &ch : paragraph) {
            ch = tolower(ch);
            if (!isalpha(ch)) {
                ch = ' ';
            }
        }

        vector<string> words;
        stringstream ss(paragraph);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        // Now words contains each space-separated word
        unordered_map<string, int> freq;
        for(int i = 0; i < words.size(); i++) {
            freq[words[i]]++;
        }
        priority_queue<pair<int, string>> pq;
        for(auto it: freq){
            pq.push({it.second, it.first});
        }

        while(!pq.empty()){
            auto [freq, elem] = pq.top();
            if(!(find(banned.begin(), banned.end(), elem) != banned.end())){
                return elem;
                break;
            }
            pq.pop();
        }   
        return "-1";
    }
};