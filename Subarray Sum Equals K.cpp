class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int acnt=0,n=nums.size(),sum=0;
        map<int,int>mp;
        // mp[0]++;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==k)acnt++;
            if(mp.find(sum-k)!=mp.end())
            {
                acnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return acnt;
    }
};