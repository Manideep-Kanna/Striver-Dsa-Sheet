static bool cmp(Item a,Item b){
        float cost1=a.value*1.0/a.weight;
        float cost2=b.value*1.0/b.weight;
        return cost1>cost2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double cost=0;
        sort(arr,arr+n,cmp);
        for(int i=0;i<n;i++){
            if(W>arr[i].weight){
                W-=arr[i].weight;
                cost+=arr[i].value;
            }
            else{
                cost+=arr[i].value*1.0*W/arr[i].weight;
                break;
            }
        }
        return cost;
    }
        