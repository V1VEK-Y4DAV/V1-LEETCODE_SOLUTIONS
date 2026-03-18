class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        for(int i = 0; i < s.size(); i++){

            char ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                ans.push(ch);
            }
            else{

                if(!ans.empty()){
                    char top = ans.top();
                    if((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')){
                        ans.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }

            }
        }
        if(ans.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};