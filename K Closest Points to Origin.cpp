bool comp(pair<vector<int>,double>a ,pair<vector<int>,double>b)
{
    if(a.second<b.second)return true;
    return false;
}
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
       map<vector<int>,int>mp;
        vector<pair<vector<int>,double>>valis;
        vector<vector<int>>alsi;
        if(points.size()==0)return alsi;
        for(int i=0;i<points.size();i++)
        {
            vector<int>v=points[i];
            pair<vector<int>,double>p;
            p.first=v;
            p.second=sqrt(abs(v[0]*v[0])+abs(v[1]*v[1]));
            // cout<<"** "<<v[0]<<" "<<v[1]<<" "<<p.second<<endl;
            valis.push_back(p);
        }
        sort(valis.begin(),valis.end(),comp);
        for(int i=0;i<valis.size();i++)
        {
            vector<int>v=valis[i].first;
            // cout<<v[0]<<" "<<v[1]<<endl;
        }
        for(int i=0;i<K;i++)alsi.push_back(valis[i].first);
        return alsi;
    }
};
