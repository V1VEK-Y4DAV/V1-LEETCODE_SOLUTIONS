class Solution {
private:
    int binaryCounter(int num) {
        int counter = 0;
        while(num > 0) {
            if(num & 1) {
                counter++;
            }
            num >>= 1;
        }
        return counter;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        unordered_map<int, int> freq;
        priority_queue<pair<int, int>> pq;

        for(int i = 0; i < arr.size(); i++) {
            int countOf = binaryCounter(arr[i]);
            // freq[arr[i]] = countOf;
            pq.push({countOf, arr[i]});
        }

        // priority_queue<pair<int, int>> pq;
        // for(auto it: freq) {
        //     pq.push({it.second, it.first});
        // }

        vector<int> ans;
        while(!pq.empty()) {
            auto [freq, elem] = pq.top();
            ans.push_back(elem);
            pq.pop();
        }

        

        reverse(ans.begin(), ans.end());

        return ans;
    }
};