class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_stack;
        stack<char> t_stack;

        int i = 0;
        int j = 0;

        while(i < s.size() || j < t.size()) {

            if(i < s.size()) {
                if(s[i] == '#'){
                    if(!s_stack.empty())
                        s_stack.pop();
                }
                else{
                    s_stack.push(s[i]);
                }
                i++;
            }

            if(j < t.size()) {
                if(t[j] == '#'){
                    if(!t_stack.empty())
                        t_stack.pop();
                }
                else{
                    t_stack.push(t[j]);
                }
                j++;
            }
        }

        return s_stack == t_stack;
    }
};