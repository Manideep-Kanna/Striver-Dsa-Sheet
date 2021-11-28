 vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>ans;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++){
            int low=i+1,high=n-1;
            if(i==0||(i>0&&a[i]!=a[i-1])){
                int sum=0-a[i];
            while(low<high){
                if(a[low]+a[high]==sum){
                    ans.push_back({a[i],a[low],a[high]});
                    while(low<high&&a[low]==a[low+1])low++;
                    while(low<high&&a[high]==a[high-1])high--;
                    low++;
                    high--;
                    }
                else if(a[low]+a[high]>sum)high--;
                else low++;
            }
        }
    }
        return ans;
    }