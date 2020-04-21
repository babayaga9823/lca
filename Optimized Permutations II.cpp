class Solution {
public:
    vector<vector<int>>rv;
    vector<int>nums;
    int n;
    void permutate(vector<int>&tmp,vector<bool>&vis)
    {
        // cout<<"entered "<<endl;
        if(tmp.size()==n)
        {
            // cout<<"Yes"<<endl;
            rv.push_back(tmp);
            return ;
        }
        for(int i=0;i<n;i++)
        {
            // cout<<"entered "<<endl;
            if(vis[i])continue;
            vis[i]=true;
            tmp.push_back(nums[i]);
            permutate(tmp,vis);
            tmp.pop_back();
            vis[i]=false;
            while(i+1<n&&nums[i]==nums[i+1])i++;
        }
    }
        
        
    vector<vector<int>> permuteUnique(vector<int>&number) {
        vector<vector<int>>arv;
        if(number.size()==0)return arv;
        sort(number.begin(),number.end());
         nums=number;
         n=nums.size();
        vector<int>tmp;
        vector<bool>vis(n,false);
        permutate(tmp,vis);
        arv=rv;
        nums.clear();
        rv.clear();
        return arv;
    }
};