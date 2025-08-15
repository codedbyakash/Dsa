class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
       int n=grid.size();
       int m=grid[0].size();
    //    for row flipping
       for(int i=0;i<n;i++){
        if(grid[i][0]==0){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0)grid[i][j]=1;
                else grid[i][j]=0;
        }
        }
       }
//  for columns fliping
for(int j=0;j<m;j++){
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(grid[i][j]==0)noz++;
        else noo++;
    }
    if(noz>noo){
    for(int i=0;i<n;i++){
            // flliping
            if(grid[i][j]==0)grid[i][j]=1;
                else grid[i][j]=0;

        }
    }
}
    // binary to decimal
    int sum=0;
for(int i=0;i<n;i++){
        int x=1;
        for(int j=m-1;j>=0;j--){
            sum+=grid[i][j]*x;
            x*=2;       
             }
    }
    return sum;
    }
};