class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

        int row = matrix.size();
        int col = matrix[0].size();

        int total = row * col;
        int count = 0;

        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;

        while(count < total){
            for(int index = startCol; count < total && index <= endCol; index++){
                res.push_back(matrix[startCol][index]);
                count++;
            }
            startRow++;
            for(int index = startRow; count < total && index <= endRow; index++){
                res.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;
            for(int index = endCol ; count < total && index >= startCol; index--){
                res.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;
            for(int index = endRow; count < total && index >= startRow; index--){
                res.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return res;
    }
};