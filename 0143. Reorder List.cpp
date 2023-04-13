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
    ListNode* reverse(ListNode* head){
        if(head==NULL) return head;
        ListNode* curr = head, *prev = NULL, *n=head->next;
        while(curr!=NULL){
            curr->next = prev;
            prev = curr;
            curr = n;
            if(n!=NULL) n = n->next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head, *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* first = head;
        ListNode* second = reverse(slow->next);
        slow->next = NULL;
        ListNode* temp1,*temp2;
        while(second!=NULL){
            temp1 = first->next;
            first->next = second;
            temp2 = second->next;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};
