class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        pair<int,int>pr[mp.size()];
        int prcnt=0;
        for(auto it:mp)
        {
           pr[prcnt].first=it.first;
           pr[prcnt++].second=it.second;
        }
        int freq=0;
        for(int i=0;i<=prcnt-2;i++)
        {
              if(pr[i+1].first-pr[i].first==1)
              {
                    int z=0;
                    
                  if(pr[i].second>=pr[i+1].second)z=max(pr[i+1].second,pr[i].second); 
                  else if(pr[i].second<pr[i+1].second)z=min(pr[i+1].second,pr[i].second);
                  freq+=z;
              }
        }
        return freq;
    }
};