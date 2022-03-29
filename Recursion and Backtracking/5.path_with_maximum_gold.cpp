// https://leetcode.com/problems/path-with-maximum-gold/
#include <bits/stdc++.h>

class Solution {
public:
    
    vector<vector<int>> grid;
    int n, m;

    bool visited[20][20];
    
    int max(int a, int b)
    {
        if(a > b){
            return a;
        }
        
        return b;
    }
    
    void dfs(int i, int j, int tmp, int &ans)
    {
       //cout << i << " " << j << " " <<  "1111111111\n";
       if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0 || visited[i][j] == true){
           return ; 
       }

       visited[i][j] = true;

       tmp += grid[i][j];
       ans = max(tmp, ans);


       dfs(i-1,j, tmp, ans);
       dfs(i, j+1, tmp, ans);
       dfs(i+1, j, tmp, ans);
       dfs(i, j-1, tmp, ans);

       tmp -= grid[i][j];
       visited[i][j] = false;
    }
     
    int getMaximumGold(vector<vector<int>>& _grid) {
       n= _grid.size();
       m= _grid[0].size();
        
      grid = _grid;
        
       int ans = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0;j < m; j++){
                int t = 0;
                dfs(i,j,0,t);
                ans = max(ans, t);
            }
        }
        
       return ans;
        
    }
};

int main()
{
    
}