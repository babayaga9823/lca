class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),i=0,l=0;
        for(i=n-2;i>=0;i--)
        {
            // cout<<"i "<<i<<endl;
            if(nums[i]<nums[i+1])
            {
                // cout<<"break "<<endl;
                break;
            }
        }
        if(i<0)
        {
            // cout<<"Here"<<endl;
            reverse(nums.begin(),nums.end());
        }
        else
        {
            // cout<<"else"<<endl;
            for(l=n-1;l>i;l--)
            {
                if(nums[l]>nums[i])break;
            }
            // cout<<"++ "<<l<<" i "<<i<<endl;
            swap(nums[l],nums[i]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};