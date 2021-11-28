	static bool cmp(int a,int b){
	    return a>b;
	    }
	int minCoins(int coin[], int m, int v) 
	{ 
	   int count=0;
	   sort(coin,coin+m,cmp);
	   for(int i=0;i<m;i++){
	       if(v>=coin[i]){
	           int d=v/coin[i];
	           v-=d*coin[i];
	           count+=d;
	       }
	   }
	   if(v!=0||count==0)return -1;
	   return count;
	} 
	  