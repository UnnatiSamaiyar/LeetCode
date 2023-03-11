/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* convert(ListNode* low, ListNode* high){
        if(low == high) return nullptr;
        ListNode* a = low;
        ListNode* b = low;
        while(b != high && b->next != high){
            a = a->next;
            b = b->next->next;
        }
        TreeNode* head = new TreeNode(a->val);
        head->left = convert(low,a);
        head->right = convert(a->next,high);
        return head;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == nullptr) return nullptr;
        return convert(head, nullptr);
    }
};
