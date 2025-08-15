class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
   int n=matrix.size();//number of rows;
   int m=matrix[0].size();//number of columns
   int i=0,j=m-1;
   while(i<=n-1&&j>=0){
    if(matrix[i][j]==target) return true;
    else if(matrix[i][j]<target)i++;
    else j--;
   }
   return false;
    }
};