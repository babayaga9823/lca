// bool comp(pair<vector<int>,int>a,pair<vector<int>,int>b)
// {
//     if(a.second<b.second)return true;
//     return false;
// }
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    
        vector<vector<int>>alish;
        if(nums1.size()==0||nums2.size()==0)return alish;
        vector<pair<int,vector<int>>>vpr;
        
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>>pq;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                pair<int,vector<int>>p;
                vector<int>v;
                int a=nums1[i],b=nums2[j];
                v.push_back(a);
                v.push_back(b);
                p.second=v;
                p.first=a+b;
                pq.push(p);
                // if(pq.size()>k)pq.pop();
                // vpr.push_back(p);
            }
        }
        
        // sort(vpr.begin(),vpr.end(),comp);
        // for(int i=0;i<vpr.size()&&i<k;i++)alish.push_back(vpr[i].first);
        // for(int i=0;i<k&&i<pq.size();i++)
        // {
        //     pq.pop();
        // }
        int pqsz=pq.size();
        for(int i=0;i<k&&i<pqsz;i++)
        {
            vector<int>vpq=pq.top().second;
            // cout<<vpq[0]<<" "<<vpq[1]<<endl;
            alish.push_back(vpq);
            pq.pop();
        }
        return alish;
    }
};

// [1,7,11]
// [2,4,6]
// 3
// []
// []
// 5
// [1,1,2]
// [1,2,3]
// 2
// [1,1,2]
// [1,2,3]
// 10