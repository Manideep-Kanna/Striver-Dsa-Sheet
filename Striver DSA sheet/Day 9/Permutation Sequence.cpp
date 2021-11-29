 string getPermutation(int n, int k) {
        string ans;
        vector<int>a;
        int fact=1;
        for(int i=1;i<n;i++){
            fact*=i;
            a.push_back(i);
        }
        a.push_back(n);
        k--;
        while(true){
            ans+=to_string(a[k/fact]);
            a.erase(a.begin()+k/fact);
            if(a.size()==0)break;
            k=k%fact;
            fact=fact/a.size();
        }
        return ans;
    }