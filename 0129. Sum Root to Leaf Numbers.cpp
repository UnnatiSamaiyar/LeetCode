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
    int sumnodes(TreeNode* root, int curr_sum){
        if(root == NULL) return 0;
        curr_sum = curr_sum * 10 + root->val;
        if(root->left == NULL && root->right == NULL) return curr_sum;
        int leftsum = sumnodes(root->left, curr_sum);
        int rightsum = sumnodes(root->right, curr_sum);
        return leftsum + rightsum;
    }
    int sumNumbers(TreeNode* root) {
        int curr_sum = 0;
        return sumnodes(root, curr_sum);
    }
};
