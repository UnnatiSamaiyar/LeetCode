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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA && !headB){
            return NULL;
        }
        while(headB){
            ListNode *temp = headA;
            while(temp){
                if(temp == headB){
                    return temp;
                }
                else{
                    temp = temp->next;
                }
                
            }
            headB = headB->next;
            
        }
        return NULL;
    }
    
};
