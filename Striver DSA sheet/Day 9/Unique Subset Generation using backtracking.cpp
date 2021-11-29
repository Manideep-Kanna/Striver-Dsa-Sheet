void helper(vector<int>&subset,vector<vector<int>>&ans,vector<int>&a,int ind,bool pre){
    
        if(ind==a.size()){
            ans.push_back(subset);
            return;
        }
        helper(subset,ans,a,ind+1,false);
        
        if(ind>0&&a[ind-1]==a[ind]&&(!pre))
            return ;
          subset.push_back(a[ind]);
        helper(subset,ans,a,ind+1,true);
        subset.pop_back();
        
        //Ignore the ith element

    
    }
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>>ans;
        vector<int>subset;
        sort(a.begin(),a.end());
        helper(subset,ans,a,0,false);
        return ans;
        
    }