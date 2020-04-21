class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>av;
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int z=floor(nums.size()/2),al=0,freq=0;
        for(auto it:mp)
        {   
            if(it.second>z&&it.second>freq)
            {
               freq=it.second;
                al=it.first;
            }
        }
        return al;
    }
    
};