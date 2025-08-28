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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // by methode 1st in this methode the space complexity of  code is SC=O(m+n),  m and n is the size of list 1 and 2 

        // ListNode* tempA=a;
        // ListNode* tempB=b;
        // ListNode* c=new ListNode(234);
        // ListNode* tempC=c;

        // while(tempA!=NULL&&tempB!=NULL){
        //     if(tempA->val>tempB->val){
        //         ListNode* t=new ListNode(tempB->val);
        //         tempC->next=t;
        //         tempC=t;
        //         tempB=tempB->next;

        //     }
        //     else{
        //        ListNode* t=new ListNode(tempA->val);
        //         tempC->next=t;
        //         tempC=t;
        //         tempA=tempA->next;
        //     }
        // }
        // if(tempA==NULL){
        //     tempC->next=tempB;
        // }
        // else{
        //     tempC->next=tempA;
        // }
        // return c->next;



        //2nd methode 

        ListNode* c=new ListNode(234);
        ListNode* tempC=c;
        while(a!=NULL&&b!=NULL){
            if(a->val>b->val){
                tempC->next=b;
                b=b->next;
                tempC=tempC->next;

            }
            else{
                tempC->next=a;
                a=a->next;
                tempC=tempC->next;

            }
        }
        if(a==NULL){
            tempC->next=b;
        }
        else{
            tempC->next=a;
        }
        return c->next;
    }
};