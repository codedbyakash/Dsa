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
        //methode ---1 --->> by iterative methode 

        // ListNode* prev=NULL;
        // ListNode* curr=head;
        // ListNode* Next=head;
        // while(curr){
        //     Next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=Next;
        // }
        // return prev;

        // methode--->>2 by recursive methode 
        if(head==NULL||head->next==NULL)return head;
        ListNode* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
        
    }
};