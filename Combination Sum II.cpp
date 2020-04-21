class Solution {
public:
    set<vector<int>>rst;
    int n,aim;
    vector<int>v;
    void combination(int id,vector<int>tmp)
    {
        for(int i=id;i<n;i++)
        {
            int z=accumulate(tmp.begin(),tmp.end(),0);
            if(z+v[i]==aim)
            {
                // sort(tmp.begin(),tmp.end());
                vector<int>arg(tmp);
                arg.push_back(v[i]);
               rst.insert(arg);
                return ;
            }
            else if(z<aim)
            {
                vector<int>arg(tmp);
                arg.push_back(v[i]);
               if(i+1<n)combination(i+1,arg);  
               else return ;
            }
            else if(z>aim)
            {
               return ;
            }
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> av;
        if(candidates.size()==0||target<0)return av;
        vector<int>tmp;
        n=candidates.size();
        aim=target;
        v=candidates;
        sort(v.begin(),v.end());
        combination(0,tmp);
        vector<vector<int>>arv(rst.begin(),rst.end());
        v.clear();
        rst.clear();
        return arv;
    }
};