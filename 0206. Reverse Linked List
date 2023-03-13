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
    ListNode* reverseList(ListNode* head) {
        ListNode* currval = head;
        ListNode* preval = NULL;
        ListNode* nextval = NULL;
        
        while(currval != NULL){
            nextval = currval->next;
            currval->next = preval;
            preval = currval;
            currval = nextval;
        }
        head = preval;
        return head;
    }
};
