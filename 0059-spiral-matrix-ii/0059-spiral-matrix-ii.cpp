class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int minr=0,maxr=n-1,minc=0,maxc=n-1;
        int count=1;
        while(minr<=maxr&&minc<=maxc){
            //moving towards right
            for(int i=minc;i<=maxc;i++){
                v[minr][i]=count++;
            }
            minr++;
            if(minr>maxr||minc>maxc)break;
            //moving towards down
            for(int i=minr;i<=maxr;i++){
                v[i][maxc]=count++;
            }
            maxc--;
            if(minr>maxr||minc>maxc)break;
            //moving towards left
            for(int i=maxc;i>=minc;i--){
                v[maxr][i]=count++;
            }
            maxr--;
            if(minr>maxr||minc>maxc)break;
            //moving towards up
            for(int i=maxr;i>=minr;i--){
                v[i][minc]=count++;
            }
            minc++;
            if(minr>maxr||minc>maxc)break;
        }
        return v;
    }
};