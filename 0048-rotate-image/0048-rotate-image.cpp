class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();//number of rows
       int m=matrix[0].size();//number of columns 
       //1st creating transpose of matrix
       for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
       }
       //swaping matric elemnts 
       for(int i=0;i<m;i++){
        int j=0,k=n-1;
        while(j<=k){
            swap(matrix[i][j],matrix[i][k]);
            j++,k--;
        }
       }
       return;
    }
};