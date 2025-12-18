class Solution {
public:
    void dfs(vector<vector<int>>& grid,int r,int c,int &area){
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
    int findMaxFish(vector<vector<int>>& grid) {
        int sum=0;
        for(int r=0;r<grid.size();r++){
            for(int c=0;c<grid[0].size();c++){
                if(grid[r][c]>0){
                    int area=0;
                    dfs(grid,r,c,area);
                    sum=max(sum,area);

                }
            }
        }
        return sum;
        
    }
};