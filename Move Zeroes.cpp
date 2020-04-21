class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==0)
            {
                if(i+1<nums.size()&&nums[i+1]!=0)
                {
                    // cout<<" if "<<i<<endl;
                    swap(nums[i],nums[i+1]);
                }
                else if(i+1<nums.size()&&nums[i+1]==0)
                {
                    // cout<<" ++ "<<i<<endl;
                    int ind=i+1;
                    while(ind<nums.size()&&nums[ind]==0)ind++;
                    if(ind<nums.size())swap(nums[i],nums[ind]);
                }
            }
        }
    }
};