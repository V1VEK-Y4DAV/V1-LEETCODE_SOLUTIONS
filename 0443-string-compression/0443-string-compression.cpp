// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         if(chars.size() == 0 || chars.size() == 1) {
//             return chars.size();
//         }

//         int counter = 0;
//         string str = "";
//         for(int i = 0; i < chars.size(); i++) {
//             if(i == 0 && chars[i] != chars[i + 1]) {
//                 str += chars[i];
//             }
//             else if(char[i] == chars[i + 1]){
//                 counter++;
//             }
//             else if(char[i] != chars[i + 1]){
//                 str += chars[i];
//                 string temp = to_string(counter);
//                 str += temp;
//             }
//             else if(i == chars.size() - 1 && chars[i - 1] != chars[i]){
//                 str += chars[i];
//             }
//             else{
//                 str += chars[i];
//                 string temp = to_string(counter);
//                 str += temp;
//             }
//         }
//         vector<char> ch;
//         for(int i = 0; i < str.size(); i++) {
//             ch.push_back(str[i]);
//         }
//         chars = ch;
//         return str.size();
//     }
// };



class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 0 || chars.size() == 1) {
            return chars.size();
        }

        string str = "";

        int counter = 1;

        for(int i = 0; i < chars.size(); i++) {

            if(i < chars.size() - 1 && chars[i] == chars[i + 1]) {
                counter++;
            }
            else {
                str += chars[i];

                if(counter > 1) {
                    string temp = to_string(counter);
                    str += temp;
                }

                counter = 1;
            }
        }

        vector<char> ch;

        for(int i = 0; i < str.size(); i++) {
            ch.push_back(str[i]);
        }

        chars = ch;

        return str.size();
    }
};