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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //1st methode  with multiple travel

        // int size=0;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     size++;
        //     temp=temp->next;
        // }
        // if(size==n) {
        //     head=head->next;
        //     return head;
        // }
        // temp=head;
        // for(int i=1;i<size-n;i++){
        //     temp=temp->next;

        // }
        // temp->next=temp->next->next;
        // return head;

        //methode ---2 by only one pass
        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast=fast->next;

        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        //now the slow is at left of the nth node from end
        slow->next=slow->next->next;
        return head;

    }
};