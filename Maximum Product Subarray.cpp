class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int mxsfr=INT_MIN;
        int mxeh=INT_MIN,mneh=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
          
           if(nums[i]>=0)
            {
                if(mxeh==INT_MIN)mxeh=nums[i];
                else mxeh=max(mxeh*nums[i],nums[i]);
                if(mneh==INT_MIN)mneh=nums[i];
                else mneh=min(mneh*nums[i],nums[i]);   
                // if(mneh>1)mneh=1;
            }
            else if(nums[i]<0)
            {
                int z=mxeh;
                if(mxeh==INT_MIN)mxeh=nums[i];
                else mxeh=max(nums[i],mneh*nums[i]);
                if(mneh==INT_MIN)mneh=nums[i];
                else mneh=min(nums[i],z*nums[i]);        
            }
            // cout<<"mn "<<mneh<<" mx "<<mxeh<<endl;
            if(mxeh>mxsfr)mxsfr=mxeh;
        }
        return mxsfr;
    }
};