void helper(int ind,vector<int>&a,int sum,vector<int>&ds,vector<vector<int>>&ans,bool pre)
    {
        if(ind==a.size()){
            if(sum==0)ans.push_back(ds);
            return;
        }
        helper(ind+1,a,sum,ds,ans,false);
        if(ind>0&&a[ind-1]==a[ind]&&!pre)return ;
        if(sum>=a[ind]){
            ds.push_back(a[ind]);
            helper(ind+1,a,sum-a[ind],ds,ans,true);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>&a, int sum) {
         vector<vector<int>>ans; 
        sort(a.begin(),a.end());
        vector<int>ds;
        helper(0,a,sum,ds,ans,false);
        return ans;
    }