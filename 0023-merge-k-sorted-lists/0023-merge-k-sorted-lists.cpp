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
    ListNode* merge(ListNode* a,ListNode* b){
        ListNode* c=new ListNode(200);
        ListNode* temp=c;
        while(a!=NULL&&b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                temp=temp->next;
                a=a->next;
            }
            else{
                temp->next=b;
                temp=temp->next;
                b=b->next;
            }
        }
        if(a==NULL)temp->next=b;
        else temp->next=a;
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)  return NULL;
      while(lists.size()>1){
            // ListNode* a=lists[lists.size()-1];
            ListNode* a=lists[0];
            // lists.pop_back();
            lists.erase(lists.begin());
            // ListNode* b=lists[lists.size()-1];
            ListNode* b=lists[0];
            // lists.pop_back();
            lists.erase(lists.begin());
            ListNode* c=merge(a,b);
            lists.push_back(c);
       }
       return lists[0];

    }
};