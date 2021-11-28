
    int findPlatform(int arr[], int dep[], int n)
    {
        int maxi=1,plt=1;
        sort(arr,arr+n);
        sort(dep,dep+n);
        int i=1,j=0;
        while(i<n&&j<n){
            if(arr[i]<=dep[j]){
                plt++;
                i++;
            }
            else{
                plt--;
                j++;
            }
            maxi=max(maxi,plt);
        }
        return maxi;
    }