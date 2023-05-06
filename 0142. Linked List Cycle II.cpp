/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *a = head;
        ListNode *b = head;
        while(a != NULL && a->next != NULL){
            a = a->next->next;
            b = b->next;
            if(a == b){
                b = head;
                while(b != a){
                    a = a->next;
                    b = b->next;
                }
                return b;
            }
        }
        return NULL;
    }
};
