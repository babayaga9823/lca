bool comp(pair<string,int>a,pair<string,int>b)
{
    if(a.second>b.second)return true;
    if(a.second==b.second)
    {
        if(a.first<b.first)return true;
    }
    return false;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        pair<string,int>pr[words.size()];
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]+=1;
        }
        int acnt=0;
        vector<pair<string,int>>v;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pair<string,int>p=(*it);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),comp);
        vector<string>alsi;
        for(int i=0;i<k;i++)alsi.push_back(v[i].first);
        return alsi;
    }
};