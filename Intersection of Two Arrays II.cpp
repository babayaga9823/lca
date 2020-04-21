class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>st1,st2;
        vector<int>rv;
        map<int,int>mp1,mp2;
        for(int i=0;i<nums1.size();i++)
        {
            st1.insert(nums1[i]);
            mp1[nums1[i]]++;
        }
         for(int i=0;i<nums2.size();i++)
        {
            st2.insert(nums2[i]);
             mp2[nums2[i]]++;
        }
        for(auto it:st1)
        {
            if(st2.find(it)!=st2.end()&&mp2[it]>0)
            {
                mp2[it]--;
                rv.push_back(it);
            }
        }
        
        return rv;
    }
};