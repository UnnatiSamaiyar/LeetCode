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
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int l = INT_MAX;
        int r = INT_MAX;

        if(root->left){
            l = minDepth(root->left);
        }
        if(root->right){
            r = minDepth(root->right);
        }
        return min(l,r)+1;
    }
};
