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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
         vector<vector<int>>v(m,vector<int>(n,-1));
         ListNode* temp=head;
        int minr=0,maxr=m-1,minc=0,maxc=n-1;
        while(minr<=maxr&&minc<=maxc){
            //moving towards right
            for(int i=minc;i<=maxc;i++){
                if(temp==NULL)return v;
                v[minr][i]=temp->val;
                temp=temp->next;
            }
            minr++;
            if(minr>maxr||minc>maxc)break;
            //moving towards down
            for(int i=minr;i<=maxr;i++){
                if(temp==NULL)return v;
                v[i][maxc]=temp->val;
                temp=temp->next;
            }
            maxc--;
            if(minr>maxr||minc>maxc)break;
            //moving towards left
            for(int i=maxc;i>=minc;i--){
                if(temp==NULL)return v;
                v[maxr][i]=temp->val;
                temp=temp->next;

            }
            maxr--;
            if(minr>maxr||minc>maxc)break;
            //moving towards up
            for(int i=maxr;i>=minr;i--){
                if(temp==NULL)return v;
                v[i][minc]=temp->val;
                temp=temp->next;
            }
            minc++;
            if(minr>maxr||minc>maxc)break;
        }
        return v;
        
    }
};