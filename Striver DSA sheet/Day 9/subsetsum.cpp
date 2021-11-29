    void calculatesums(int ind,int n,vector<int>arr,vector<int>&ans,int sum){
        if(ind==n){
            ans.push_back(sum);
            return ;
        }
        calculatesums(ind+1,n,arr,ans,sum+arr[ind]);
        calculatesums(ind+1,n,arr,ans,sum);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int>ans;
        calculatesums(0,n,arr,ans,0);
        return ans;
    }