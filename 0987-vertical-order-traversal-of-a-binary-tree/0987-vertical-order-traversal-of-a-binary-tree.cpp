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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        vector<vector<int>> ans;

        if(root == NULL) {
            return ans;
        }

        q.push({root, {0, 0}});

        while(!q.empty()){
            auto temp = q.front();
            q.pop();

            TreeNode* firstNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].insert(firstNode -> val);

            if(firstNode -> left){
                q.push({firstNode -> left, {hd - 1, lvl + 1}});
            }

            if(firstNode -> right){
                q.push({firstNode -> right, {hd + 1, lvl + 1}});
            }
        }

        for(auto &p : nodes) {
            vector<int> col;
            for(auto &q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};