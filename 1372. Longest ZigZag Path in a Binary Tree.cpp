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
    int count=0;
    void solve(TreeNode* root, bool leftside, int currPathLen){
        if(!root) return;
        count = max(count, currPathLen);
        if(leftside){
            solve(root->left, false, currPathLen+1);
            solve(root->right, true, 1);
        } 
        else{
            solve(root->right, true, currPathLen+1);
            solve(root->left, false, 1);
        }
    }
    int longestZigZag(TreeNode* root) {
        solve(root, true, 0);
        solve(root, false, 0);
        return count;
    }
};
