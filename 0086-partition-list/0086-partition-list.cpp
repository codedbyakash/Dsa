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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* lo=new ListNode(100);
        ListNode* hi=new ListNode(100);
        ListNode* templo=lo;
        ListNode* temphi=hi;
        ListNode* t=head;
        while(t!=NULL){
            if(t->val>=x){
                temphi->next=t;
                temphi=temphi->next;
                t=t->next;
            }
            else{
                templo->next=t;
                templo=templo->next;
                t=t->next;
            }
        }
        templo->next=hi->next;
        temphi->next=NULL;
        //after creating listllo and listhi merging both linkedlist 
        return lo->next;
    }
};