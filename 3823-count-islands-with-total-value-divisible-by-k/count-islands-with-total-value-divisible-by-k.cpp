class Solution {
public:
void dfs(vector<vector<int>>& grid,int r,int c,long long &area){
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()){
            return;
        }
        if(grid[r][c]>0){
            area=area+grid[r][c];
            grid[r][c]=0;
            dfs(grid,r+1,c,area);
            dfs(grid,r-1,c,area);
            dfs(grid,r,c+1,area);
            dfs(grid,r,c-1,area);
        }
    }
    int countIslands(vector<vector<int>>& grid, int k) {
         int sum=0;
         int count=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]>0){
                    long long area=0;
                    dfs(grid,r,c,area);
                    if(area%k==0){
                        count++;
                    }

                }
            }
        }
        return count;
        
        
    }
};


