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
    int k = 0;
    TreeNode* solve(vector<int> &a,vector<int> &b,int s,int e){
        if(s>e){
            return NULL;
        }
        TreeNode* node = new TreeNode(a[k++]);
        int i;
        for(i = s; i<=e;i++){
            if(node->val == b[i]){
                break;
            }
        }
        node->left = solve(a,b,s,i-1);
        node->right = solve(a,b,i+1,e);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        k = 0;
        return solve(preorder,inorder,0,inorder.size()-1);
    }
};
