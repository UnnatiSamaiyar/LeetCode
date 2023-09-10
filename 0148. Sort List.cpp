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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(),v.end());
        temp = head;
        int count = 0;
        while(temp){
            temp->val = v[count];
            temp = temp->next;
            count++;
        }
        return head;
    }
};
