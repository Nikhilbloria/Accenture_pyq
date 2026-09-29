class Solution {
public:
    int m,n;
    int t[101][101][201];
    bool solve(int i,int j,int cnt,vector<vector<char>>& grid){
        cnt += (grid[i][j]=='(') ?1:-1;
        if(cnt<0){
            return false;
        }
        if(t[i][j][cnt]!=-1){
            return t[i][j][cnt];
        }
        if(i== m-1 && j== n-1){
            return t[i][j][cnt] = (cnt == 0);
        }
        if(i+1<m){
            if(solve(i+1,j,cnt,grid)){
                return t[i][j][cnt] = true;
            }
        }
        if(j+1<n){
            if(solve(i,j+1,cnt,grid)){
                return t[i][j][cnt] = true;
            }
        }
        return t[i][j][cnt] = false;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        n = grid[0].size();
        m = grid.size();
        if((m+n-1)%2==1){
            return false;
        }
        if(grid[0][0]==')'||grid[m-1][n-1]=='('){
            return false;
        }
        memset(t,-1,sizeof(t));
        return solve(0,0,0,grid);
    }
};