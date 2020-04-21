// same as longest Subarray having sum k

class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
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

// The mp[0]=-1 will be set to minus one
// , as the index of the array starts at zero – the length is plus one to the index difference. 