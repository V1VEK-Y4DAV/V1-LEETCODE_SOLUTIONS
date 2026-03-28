class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int index = 0;
        while(index < s.size()){
            char ch = s[index];
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    if((st.top() == '(' && ch == ')') ||
                    (st.top() == '[' && ch == ']') ||
                    (st.top() == '{' && ch == '}')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            index++;
        }

        if(st.empty()){
            return true;
        }
        return false;;
    }
};