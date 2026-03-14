class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int row_index = row - 1;
        int col_index = 0;

        while(row_index >= 0 && col_index < col){
            int element = matrix[row_index][col_index];

            if(element == target){
                return true;
            }
            else if(element > target){
                row_index--;
            }
            else{
                col_index++;
            }
        }
        return false;
    }
};