class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        if(s[0] != '*' ) st.push(s[0]);

        for(int i = 1; i < s.size(); i++) {
            if(s[i] == '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        string str = "";
        while(!st.empty()) {
            str += st.top();
            st.pop();
        }

        reverse(str.begin(), str.end());
        return str;
    }
};