class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        
    unordered_map<int,int>xstuff,ystuff;
    int p=grid.size();
    int z=grid[0].size();
    int sum=0;
    for(int x=0;x<p;++x){
        for(int y=0;y<z;++y){
            if(grid[x][y]){
                xstuff[x]++;
                ystuff[y]++;
            }
        }
    }
    for(int x=0;x<p;++x){
        for(int y=0;y<z;++y){
            if(grid[x][y]){
                if(xstuff[x]>1||ystuff[y]>1)sum++;
            }
        }
    }
    return sum;

    }
};