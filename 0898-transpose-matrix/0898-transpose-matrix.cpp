class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();//number of rows 
        int m=matrix[0].size();// number of columns 
        vector<vector<int>>v(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j]=matrix[j][i];
            }
        }
        return v;
    }
};