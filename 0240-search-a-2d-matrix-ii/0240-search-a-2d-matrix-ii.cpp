class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int j = 0; j < col; j++){
            int top = 0;
            int bottom = row - 1;

            while(top <= bottom){
                int mid = top + (bottom - top)/2;

                int element = matrix[mid][j];

                if(element == target){
                    return true;
                }
                else if(element < target){
                    top = mid + 1;
                }
                else{
                    bottom = mid - 1;
                }
            }
        }
        return false;
    }
};