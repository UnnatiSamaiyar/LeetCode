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
    void pre(TreeNode* node,vector<vector<int>>& vv,int n) {
        if(!node) return;
        if(n<vv.size()) vv[n].push_back(node->val);
        else vv.push_back(vector<int>(1,node->val));
        pre(node->left,vv,n+1);
        pre(node->right,vv,n+1);
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vv;
        pre(root,vv,0);
        for(int i=0;i<vv.size();i++) if(i&1) reverse(vv[i].begin(),vv[i].end());
        return vv;
    }
};
