 static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int>ans;
        int maxdead=arr[0].dead;
        for(int i=1;i<n;i++){
            maxdead=max(maxdead,arr[i].dead);
        }
        int slot[maxdead+1]={0};
        sort(arr,arr+n,cmp);
        int count=0,cost=0;
        for(int i=0;i<n;i++){
            int dead=arr[i].dead;
            for(int j=dead;j>0;j--){
                if(slot[j]==0){
                    cost+=arr[i].profit;
                    count++;
                    slot[j]=1;
                    break;
                }
            }
        }
        
        ans.push_back(count);
        ans.push_back(cost);
        return ans;
    }  