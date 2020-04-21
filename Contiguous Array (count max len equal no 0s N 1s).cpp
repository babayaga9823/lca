class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)nums[i]=-1;
            st.insert(nums[i]);
        }
        if(st.size()==1)return 0;
        map<int,int>mp;//val index
        // mp[0]=-1;
        int sum=0,maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==0)
            {
                maxi=i+1;
                // cout<<"here "<<maxi<<endl;
            }
            if(mp.find(sum)!=mp.end())
            {
                int z=i-mp[sum];
                if(z>maxi)maxi=z;
            }
            if(mp.find(sum)==mp.end())mp[sum]=i;
        }
        return maxi;
    }
};