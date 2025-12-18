class Solution {
public:
int dfs(vector<vector<int>> &grid,int r,int c,int &Area){
    if(r<0||c<0||r>=grid.size()||c>=grid[0].size()){
        return 0;
    }

    if(grid[r][c]==1){
        Area++;
        grid[r][c]=0;
        dfs(grid,r+1,c,Area);
        dfs(grid,r-1,c,Area);
        dfs(grid,r,c+1,Area);
        dfs(grid,r,c-1,Area);
    }
 return Area;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxA=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]==1){
                    int Area=0;
                   int area=dfs(grid,r,c,Area);
                    maxA=max(maxA,area);
                    
                }

                    
                }
            }

     return maxA;
        }

        
    };