int findMaxConsecutiveOnes(vector<int>& nums) {
        int global_max=0,local_max=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                local_max++;
            }
            else{
                local_max=0;
            }
   global_max=max(global_max,local_max);
        }
        return global_max;
    }