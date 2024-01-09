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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafroot1, leafroot2;
        collectleafvalues(root1, leafroot1);
        collectleafvalues(root2, leafroot2);
        return leafroot1 == leafroot2;
    }
private:
    void collectleafvalues(TreeNode* root, vector<int>& leafValue){
        if(root==nullptr){
            return;
        }
        if(root->left == nullptr && root->right == nullptr){
            leafValue.push_back(root->val);
        }
        collectleafvalues(root->left, leafValue);
        collectleafvalues(root->right, leafValue);
    }
};
