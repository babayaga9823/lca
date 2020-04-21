class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        multimap<int,int>mp;
        int cnt=0,sum=0,maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int z=k-sum;
            if(sum==k)
            {
                int z=i+1;
                if(z>maxi)maxi=z;
            }
            if(mp.find(z)!=mp.end())
            {
                int diffind=mp[z]-i;
                if(diffind>maxi)maxi=diffind;
            }
            if(mp.find(z)==mp.end())mp[sum]=i;
        }
        return cnt;
    }
};