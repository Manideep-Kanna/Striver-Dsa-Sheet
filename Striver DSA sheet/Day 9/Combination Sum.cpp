 void helper(int ind,vector<int>&a,int sum,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ind==a.size()){
            if(sum==0)ans.push_back(ds);
            return;
        }
        if(sum>=a[ind]){
            ds.push_back(a[ind]);
            helper(ind,a,sum-a[ind],ds,ans);
            ds.pop_back();
        }
        helper(ind+1,a,sum,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int sum) {
       vector<vector<int>>ans; 
        vector<int>ds;
        helper(0,a,sum,ds,ans);
        return ans;
    }