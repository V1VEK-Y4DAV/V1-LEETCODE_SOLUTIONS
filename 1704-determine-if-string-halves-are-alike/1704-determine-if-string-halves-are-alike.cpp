class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

        int counter_a = 0;
        int counter_b = 0;

        for(int i = 0; i < (s.size() / 2); i++) {
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                counter_a++;
            }
        }

        for(int i = (s.size() / 2); i < s.size(); i++) {
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                counter_b++;
            }
        }

        return counter_a == counter_b;
    }
};