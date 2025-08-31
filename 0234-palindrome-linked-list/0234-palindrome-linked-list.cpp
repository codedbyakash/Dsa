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
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* Next=head;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
    //     ListNode* c=new ListNode(100);
    //   //creating deep-copy 
    //   ListNode* temp=head;
    //   ListNode* tempc=c;
    //   while(temp){
    //     ListNode* node=new ListNode(temp->val);
    //     tempc->next=node;
    //     temp=temp->next;
    //     tempc=tempc->next;
    //   }
    //   c=c->next;
    //   c=reverseList(c);
    // ListNode* a=head;
    // ListNode* b=c;
    // while(a){
    //     if(a->val==b->val){
    //         a=a->next;
    //         b=b->next;
    //     }
    //     else {
    //         return false;
    //     }
    // }
    // return true;


    //Methode --->> 2nd
    // if the first half and second half are reverse of each 
    // other then it is a palindrome
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //slow is at the left middle  / middle 
    ListNode* newHead=reverseList(slow->next);
    ListNode* a=head;
    ListNode* b=newHead;
    while(b){
        if(a->val!=b->val)return false;
        a=a->next;
        b=b->next;
    }
    return true;
    }
};