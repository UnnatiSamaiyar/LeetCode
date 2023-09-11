/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void solve(TreeNode* cloned, TreeNode* target){
        if(cloned==NULL) return;
        if(cloned->val==target->val) ans = cloned;
        solve(cloned->right, target);
        solve(cloned->left, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(cloned, target);
        return ans;
    }
};
