class Solution {
public:
void dfs(vector<vector<int>>& grid,int r,int c,int &peri){
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()){
            peri++;
            return;
        }
        if(grid[r][c]==1){
        
            grid[r][c]=2;
            dfs(grid,r+1,c,peri);
            dfs(grid,r-1,c,peri);
            dfs(grid,r,c+1,peri);
            dfs(grid,r,c-1,peri);
        }
        else if(grid[r][c]==0){
            peri++;
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int res=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]==1){
                    int peri=0;
                    dfs(grid,r,c,peri);
                    res += peri;
                }
            }
        }
        return res;
        
    }
};

