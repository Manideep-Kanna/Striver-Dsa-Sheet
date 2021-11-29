void generate(vector<vector<int>>&ans,vector<int>&subset,vector<int>&arr,int ind){
        if(ind==arr.size())
        {
            ans.push_back(subset);
            return;
        }
        generate(ans,subset,arr,ind+1);
        
        subset.push_back(arr[ind]);
        generate(ans,subset,arr,ind+1);
        subset.pop_back();
}
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>subset;
        generate(ans,subset,arr,0);
        return ans;
    }