/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
        if(root == NULL){
            return vec;
        }

        queue<TreeNode* > q;
        q.push(root);

        while(!q.empty()) {
            int levelSize = q.size();

            for(int i = 0; i < levelSize; i++) {
                TreeNode* temp = q.front();
                q.pop();

                if(i == levelSize - 1) {
                    vec.push_back(temp -> val);
                }

                if(temp -> left) {
                    q.push(temp -> left);
                }

                if(temp -> right) {
                    q.push(temp -> right);
                }
            }
        }
        return vec;
    }
};