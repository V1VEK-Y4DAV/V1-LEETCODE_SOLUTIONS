class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;

        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }

        for(auto it1 = mp.begin(); it1 != mp.end(); ++it1){
            auto it2 = it1;
            ++it2;  // move to next element

            for(; it2 != mp.end(); ++it2){
                if(it1->second == it2->second){
                    return false;
                }
            }    
        }
        return true;
    }
};