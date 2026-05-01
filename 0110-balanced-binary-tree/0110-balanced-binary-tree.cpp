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
private:
    int height(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int left = height(root -> left);
        int right = height(root -> right);

        int ans = max(left, right) + 1;
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) {
            return true;
        }

        int leftroot = height(root -> left);
        int rightroot = height(root -> right);

        int res = abs(leftroot - rightroot);

        return res <= 1 && isBalanced(root -> left) && isBalanced(root -> right);
    }
};