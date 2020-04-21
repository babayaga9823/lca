class Solution {
public:
    set<vector<int>>st;
    vector<int>vn;
    void allset(int id,vector<int>v)
    {
        // sort(v.begin(),v.end());
        st.insert(v);
        for(int i=id;i<vn.size();i++)
        {
           vector<int>tmp(v);
           tmp.push_back(vn[i]);
          if(i+1<vn.size())allset(i+1,tmp);
          else
          {
              // sort(tmp.begin(),tmp.end());
                st.insert(tmp);
          }
        }
        
    }
        
        
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>av;
        vn=nums;
        if(nums.size()==0)return av;
        vector<int>temp;
        allset(0,temp);
        vector<vector<int>>ar;
        for(auto it:st)ar.push_back(it);
        vn.clear();
        st.clear();
        return ar;
    }
};