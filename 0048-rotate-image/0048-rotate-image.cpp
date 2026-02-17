class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> res(row, vector<int>(col, 0));
        int n = row;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                res[j][n-i-1] = matrix[i][j];
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                matrix[i][j] = res[i][j];
            }
        }
    }
};