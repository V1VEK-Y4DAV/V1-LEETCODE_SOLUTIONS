class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;
        st.push('1');
        for(int i = 0; i < s.size(); i++) {
            if(st.top() != s[i]) {
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }

        string str = "";
        while(st.top() != '1') {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};

// ----------------------------------------------------

// class Solution {
// public:
//     string removeDuplicates(string s) {
        
//         for(int i = 0;i < s.size() - 1; i++) {
//             if(s[i] == s[i+1]) {
//                 s.erase(s.begin()+(i+1));
//                 s.erase(s.begin()+i);
//                 i -= 2;
//             }
//         }
//         return s;
//     }
// };