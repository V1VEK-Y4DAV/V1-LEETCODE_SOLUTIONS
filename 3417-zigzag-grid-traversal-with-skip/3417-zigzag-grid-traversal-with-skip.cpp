class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int> ans;
        bool flag = false;

        for(int i = 0; i < row; i++){
            if(i % 2 == 0){
                for(int j = 0; j < col; j++) {
                    if(!flag) {
                        ans.push_back(grid[i][j]);
                    }
                    flag = !flag;
                }
            }
            else{
                for(int j = col - 1; j >= 0; j--) {
                    if(!flag) {
                        ans.push_back(grid[i][j]);
                    }
                    flag = !flag;
                }
            }
        }

        return ans;
    }
};