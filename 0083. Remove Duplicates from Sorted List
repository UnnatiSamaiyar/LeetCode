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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *Current_node = head;
        while(Current_node !=NULL && Current_node->next !=NULL){
            if(Current_node->next->val == Current_node->val){
                Current_node->next = Current_node->next->next;
            }
            else{
                Current_node = Current_node->next;
            }
        }
        return head;
    }
};
