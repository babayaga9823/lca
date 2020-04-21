class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int fond=0,val=0;
        if(nums.size()==0||nums.size()==1)return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>0&&i<nums.size()-1)
            {
                if((nums[i-1]<nums[i])&&(nums[i]>nums[i+1]))
                {
                    val=i;
                    break;
                }
            }
            else
            {   
                int z=INT_MIN;
                if(i==0)
                {
                    if((z<nums[i])&&(nums[i]>nums[1]))
                    {
                        val=i;
                    }
                }
                if(i==nums.size()-1)
                {
                    if((z<nums[i])&&(nums[i]>nums[i-1]))
                    {
                        val=i;
                    }
                }
            }
        }
        return val;
    }
};