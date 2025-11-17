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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        if(!root) return 0;
        q.push(root);
        int depth = 0;

        while(!q.empty()) {
            int levelSize = q.size();

            for(int i=0; i<levelSize; i++) {
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            depth++;
        }
        return depth;
    }
};