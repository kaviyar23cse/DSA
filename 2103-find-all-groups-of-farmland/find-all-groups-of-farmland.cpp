class Solution {
public:
    void dfs(vector<vector<int>>& land,int i,int j,int &r,int &c){
        if(i<0||j<0||i>=land.size()||j>=land[0].size()){ return;
        }
        if(land[i][j]==1){
            land[i][j]=0;
            if(i>r) r=i;
            if(j>c) c=j;
            dfs(land,i,j+1,r,c);
            dfs(land,i,j-1,r,c);
            dfs(land,i-1,j,r,c);
            dfs(land,i+1,j,r,c);

        }


            
 }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> res;
        for(int i=0;i<land.size();i++){
            for(int j=0;j<land[0].size();j++){
                if(land[i][j]==1){
                    int r=i,c=j;
                    dfs(land,i,j,r,c);
                    res.push_back({i,j,r,c});
                }
            }
        }
        return res;
        
    }
};