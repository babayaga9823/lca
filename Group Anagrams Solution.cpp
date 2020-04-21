class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int i,j;
        map<string,int>mp;
        set<string>st;
        vector<vector<string>> vs;
        if(strs.empty())return vs;
        int indv=0;
        for(int i=0;i<strs.size();i++)
        {
            string als=strs[i];
            sort(als.begin(),als.end());
            if(st.find(als)==st.end())
            {
                mp[als]=indv;
                st.insert(als);
                vector<string>rvs;
                rvs.push_back(strs[i]);
                vs.push_back(rvs);
                indv++;
            }
            else
            {
                int z=mp[als];
                vs[z].push_back(strs[i]);
            }
        }
        
        return vs;
    }
};