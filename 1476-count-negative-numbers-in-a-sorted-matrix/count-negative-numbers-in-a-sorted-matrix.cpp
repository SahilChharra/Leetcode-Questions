class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,ans=0;
        int n=grid.size();
        int j=grid[0].size()-1;
        int m=grid[0].size();
        for(i = 0; i < n; i++){
            while(j>= 0 && grid[i][j]<0){
                j--;
            }
            if(j<0){
                ans += m;
            }
            else if(j<m-1){
                ans += m-j-1;
            }
        }
        return ans;
    }
};