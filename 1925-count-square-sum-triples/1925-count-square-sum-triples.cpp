class Solution {
public:
    int countTriples(int n) {
        int counter = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                for(int k = 1; k <= n; k++){
                    int a = i * i;
                    int b = j * j;
                    int c = k * k;
                    if(a + b == c){
                        counter++;
                    }
                }
            }
        }
        return counter;
    }
};