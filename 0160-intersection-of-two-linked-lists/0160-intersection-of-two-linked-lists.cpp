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
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int sizeA=0,sizeB=0;
        while(tempA!=NULL){
            sizeA++;
            tempA=tempA->next;
            
        }
        while(tempB!=NULL){
             sizeB++;
            tempB=tempB->next;
           
        }
        tempA=headA;
        tempB=headB;
        if(sizeA>sizeB){
            int diff=sizeA-sizeB;
            for(int i=0;i<diff;i++){
               tempA=tempA->next;
            }
        }
        else{
            int diff=sizeB-sizeA;
            for(int i=0;i<diff;i++){
                tempB=tempB->next;
            }
        }
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }
};