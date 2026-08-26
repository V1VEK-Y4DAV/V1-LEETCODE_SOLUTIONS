class Solution {
public:
    string frequencySort(string s) {
        map<char, int> freq;
        for(int i = 0;i < s.size(); i++) {
            freq[s[i]]++;
        }

        priority_queue<pair<int, char>> pq;
        for(auto it: freq) {
            pq.push({it.second, it.first});
        }

        string str = "";
        while(!pq.empty()) {
            auto [frequency, character] = pq.top();
            for(int i = 0; i < frequency; i++) {
                str += character;
            }
            pq.pop();
        }
        return str;

    }
};