class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> ans;
        int score = 0;
        int counter = 0;
        vector<string> check = {"0", "1", "2", "3", "4", "6"};
        for(int i = 0; i < events.size(); i++){
            if(counter == 10){
                break;
            }
            if(find(check.begin(), check.end(), events[i]) != check.end()) {
                char ch = events[i][0];
                int num = ch - '0';
                score += num;
            }
            else if(events[i] == "W") {
                counter++;
            }
            else if(events[i] == "WD" || events[i] == "NB") {
                score++;
            }
        }
        ans.push_back(score);
        ans.push_back(counter);
        return ans;
    }
};