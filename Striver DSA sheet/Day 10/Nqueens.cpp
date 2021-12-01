 bool issafe(vector<string>&board,int row,int col,int n){
        int duprow=row,dupcol=col;
        while(row>=0&&col>=0){
            if(board[row--][col--]=='Q')return false;
        }
        row=duprow,col=dupcol;
        while(col>=0){
            if(board[row][col--]=='Q')return false;
        }
        row=duprow,col=dupcol;
        while(row<n&&col>=0){
            if(board[row++][col--]=='Q')return false;
        }
        return true;
        
    }
    void nqueens(int col,vector<vector<string>>&ans,vector<string>&board,int n){
        if(col==n){
            ans.push_back(board);
            return ;
        }
        for(int row=0;row<n;row++){
            if(issafe(board,row,col,n)){
                board[row][col]='Q';
                nqueens(col+1,ans,board,n);
                board[row][col]='.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        nqueens(0,ans,board,n);
        return ans;
    }