    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int i=0,n=nums.size();
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }