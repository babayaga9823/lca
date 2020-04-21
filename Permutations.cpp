class Solution {
public:
    vector<vector<int>>rv;
    vector<int>av;
    int n;
    void permutate(int id,vector<int>argv)
    {
        for(int i=0;i<n;i++)
        {
            vector<int>tmp(argv);
            // cout<<"inserted "<<av[i]<<endl;
            tmp.push_back(av[i]);
            if(id+1<n)permutate(id+1,tmp);
            else
            {
                // cout<<"id "<<id<<" n "<<n<<endl;
                // for(auto it:tmp)cout<<it<<" ";
                // cout<<endl;
                set<int>st(tmp.begin(),tmp.end());
                if(st.size()==n)rv.push_back(tmp);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>at;
        if(nums.size()==0)return at;
        av=nums;
        n=nums.size();
        vector<int>tmp;
        permutate(0,tmp);
        vector<vector<int>>alv(rv);
        rv.clear();
        av.clear();
        return alv;
    }
};