class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()==0)return ;
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]+=1;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            int ind=(*it).first,z=(*it).second;
            while(z--)
            {
                nums[cnt++]=ind;
            }
            
        }
    }
};