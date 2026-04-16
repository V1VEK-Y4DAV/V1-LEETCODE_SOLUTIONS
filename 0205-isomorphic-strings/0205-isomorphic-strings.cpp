class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map1;
        map<char, char> map2;

        for(int i = 0; i < s.size(); i++){
            int c1 = s[i];
            int c2 = t[i];
            if(map1.count(c1)){
                if(map1[c1] != c2){
                    return false;
                }
            }
            else{
                map1[c1] = c2;
            }

            if(map2.count(c2)){
                if(map2[c2] != c1){
                    return false;
                }
            }
            else{
                map2[c2] = c1;
            }
        }
        return true;
    }
};