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
    ListNode* oddEvenList(ListNode* head) {
        // if(head==NULL||head->next==NULL)return head;
    ListNode* odd=new ListNode(100);
    ListNode* even=new ListNode(200);
    ListNode* tempodd=odd;
    ListNode* tempeven=even;
    ListNode* temp=head;
    int index=1;
    while(temp!=NULL){
        if(index%2!=0){
            tempodd->next=temp;
            tempodd=tempodd->next;
        }
        else{
            tempeven->next=temp;
            tempeven=tempeven->next;
        }
        temp=temp->next;
        index++;
    }  
    tempodd->next=even->next;
    tempeven->next=NULL;
    return odd->next;

    }
};