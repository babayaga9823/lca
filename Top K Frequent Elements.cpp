bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.second>b.second)return true;
    return false;
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>v;
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int z=nums[i];
            mp[z]+=1;
            if(z>maxi)maxi=z;
            if(z<mini)mini=z;
        }
        vector<pair<int,int>>vp;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pair<int,int>p=*it;
            vp.push_back(p);
            // cout<<p.first<<" "<<p.second<<endl;
        }
        sort(vp.begin(),vp.end(),comp);
        for(int i=0;i<k;i++)v.push_back(vp[i].first);
      return v;
    }
};
