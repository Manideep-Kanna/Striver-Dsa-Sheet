oid helper(int row,int col,vector<vector<int>>&m,int n,vector<string>&ans,string ds
    ,int dx[],int dy[],string temp,vector<vector<int>>&vis){
        if(row==n-1&&col==n-1){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<4;i++){
            int nexti=row+dx[i];
            int nextj=col+dy[i];
            if(nexti>=0&&nextj>=0&&nexti<n&&nextj<n&&vis[nexti][nextj]==0&&m[nexti][nextj]==1){  
                vis[row][col]=1;
            helper(nexti,nextj,m,n,ans,ds+temp[i],dx,dy,temp,vis);
                vis[row][col]=0;
            }
        }
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
      vector<string>ans;
      string ds;
      vector<vector<int>> vis(n, vector<int> (n, 0)); 
      int dx[]={1,0,0,-1};
      int dy[]={0,-1,1,0};
      string temp="DLRU";
    if(m[0][0]==1)  helper(0,0,m,n,ans,ds,dx,dy,temp,vis);
    return ans;
    }