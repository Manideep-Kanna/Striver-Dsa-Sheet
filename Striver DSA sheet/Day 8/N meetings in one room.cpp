 int maxMeetings(int start[], int end[], int n)
    {
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end(),cmp);
        int ans=1,prev=v[0][1];
        for(int i=1;i<v.size();i++){
            if(prev<v[i][0]){
                ans++;
                prev=v[i][1];
            }
        }
        return ans;
    }