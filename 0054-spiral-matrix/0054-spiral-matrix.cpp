class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();//number of rows
        int m=matrix[0].size();//number of columns
        vector<int>v;
        int tne=n*m;
        int count=0;
        int minr=0,maxr=n-1,minc=0,maxc=m-1;
        while((minr<=maxr)&&(minc<=maxc)){
            for(int j=minc;j<=maxc&&count<tne;j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;
            for(int i=minr;i<=maxr&&count<tne;i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            for(int j=maxc;j>=minc&&count<tne;j--){
                v.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr&&count<tne;i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;

        }
        return v;
    }
};