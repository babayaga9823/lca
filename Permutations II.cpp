class Solution {
public:
    set<vector<int>>rv;
    vector<int>av;
    multiset<int>mst;
    map<int,int>mmp;
    int n;
    // bool chk[1000000]={false};
    void permutate(int id,vector<int>&argv,map<int,int>&mp)
    {
        vector<bool>chk(n,false);
        for(int i=0;i<n;i++)
        {
            vector<int>tmp(argv);
            if(!chk[i])if(i>0&&av[i-1]==av[i]&&chk[i-1])continue ;
            else chk[i]=true;
            tmp.push_back(av[i]);
            map<int,int>tmpmp(mp);
            tmpmp[av[i]]++;
            if( tmpmp[av[i]]>mmp[av[i]])continue;
            if(id+1<n)permutate(id+1,tmp,tmpmp);
            else
            {
               
                if(tmp.size()==n)
                {
                    // multiset<int>tst(tmp.begin(),tmp.end());
                    // if(tst==mst)
                        rv.insert(tmp);
                    // return ;
                   
                }
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>at;
        if(nums.size()==0)return at;
        av=nums;
        n=nums.size();
        sort(av.begin(),av.end());
        for(auto it:nums)mst.insert(it);
        for(auto it:nums)mmp[it]++;
        vector<int>tmp;
        vector<bool>chk(n,false);
        map<int,int>mp;
        permutate(0,tmp,mp);
        vector<vector<int>>alv(rv.begin(),rv.end());
        rv.clear();
        av.clear();
        return alv;
    }
};