class Solution {
private:
    void makeZero(vector<vector<int>>& temp, int row, int col) {
        int r = temp.size();
        int c = temp[0].size();
        for(int i = 0; i < c; i++) { // row is same
            temp[row][i] = 0;
        }

        for(int i = 0; i < r; i++) { // col is same
            temp[i][col] = 0;
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> temp = matrix;

        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(matrix[i][j] == 0) {
                    makeZero(temp, i, j);
                }
            } 
        }
        matrix = temp;
        
    }
};