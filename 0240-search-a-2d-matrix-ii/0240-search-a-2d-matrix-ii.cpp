class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // stairCase method;
        int row = matrix.size();
        int col = matrix[0].size();

        int row_index = 0;
        int col_index = col - 1;

        while(row_index < row && col_index >= 0){
            int element = matrix[row_index][col_index];

            if(element == target){
                return true;
            }
            else if(element < target){
                row_index++;
            }
            else{
                col_index--;
            }
        }
        return false;
    }
};