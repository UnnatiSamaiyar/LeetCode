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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* prev = NULL;
        ListNode* curr = l1;
        //reverse first list ---- l1
        while(curr!=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        l1 = prev;

        //reverse second list ----l2
        prev = NULL;
        curr = l2;
        while(curr!=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        l2 = prev;
        
        //make a list for ans initilise with 0
        ListNode* ans = new ListNode(0);
        //make a curr list which traverse or store summation of list
        ListNode* cur = ans;
        int carry = 0;
        while(l1!=NULL||l2!=NULL||carry>0){
            int sum = carry;
            if(l1!=NULL){
              sum = sum+l1->val;
              l1 = l1->next;
            }
            if(l2!=NULL){
                sum = sum+l2->val;
                l2 = l2->next;
            }
            carry  = sum/10;
            cur->next = new ListNode(sum%10);
            cur = cur->next;
        }
        curr = ans->next;
        prev = NULL;
        while(curr!=NULL){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
