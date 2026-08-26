class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;

        for(auto it: freq) {
            pq.push({it.second, it.first});
        }

        vector<int> ans;
        int counter = k;
        while(counter > 0){
            auto [freq, elem] = pq.top();
            ans.push_back(elem);
            pq.pop();
            counter--;
        }
        return ans;
    }
};