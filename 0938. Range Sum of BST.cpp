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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        targetSumBST(root, low, high, ans);
        return ans;
    }

private:
    void targetSumBST(TreeNode* root, int low, int high, int& sum) {
        if (root == nullptr) {
            return;
        }

        if (root->val >= low && root->val <= high) {
            sum += root->val;
        }

        if (root->val > low) {
            targetSumBST(root->left, low, high, sum);
        }

        if (root->val < high) {
            targetSumBST(root->right, low, high, sum);
        }
    }
};
