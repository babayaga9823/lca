class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<int>st;
        set<pair<int,int>>stp;
        map<int,int>mp;
        if(nums.size()==0)return stp.size();
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
            mp[nums[i]]++;
        }
        for(auto it:st)
        {
            int z=it;
            // cout<<" ** "<<z<<endl;
            if(st.find(k-z)!=st.end())
            {
                int a=z<(k-z)?z:(k-z);
                int b=z>(k-z)?z:(k-z);
                pair<int,int>p;
                p.first=a;
                p.second=b;
                // cout<<" a "<<a<<" b "<<b<<endl;
                if(abs(a-b)==k&&a!=b)stp.insert(p);
                if(abs(a-b)==k&&a==b&&mp[a]>1)stp.insert(p);
            }
            if(st.find(z-k)!=st.end())
            {
                int a=z<(z-k)?z:(z-k);
                int b=z>(z-k)?z:(z-k);
                pair<int,int>p;
                p.first=a;
                p.second=b;
                // cout<<" a "<<a<<" b "<<b<<endl;
                if(abs(a-b)==k&&a!=b)stp.insert(p);
                if(abs(a-b)==k&&a==b&&mp[a]>1)stp.insert(p);
            }
        }
        // for(auto it:stp)
        // {
        //     pair<int,int>p=it;
        //     cout<<" ++ "<<p.first<<" "<<p.second<<endl;
        // }
        return stp.size();
    }
};