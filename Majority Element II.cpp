class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>av;
        if(nums.size()==0)return av;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int z=floor(nums.size()/3);
        for(auto it:mp)
        {   
            if(it.second>z)av.push_back(it.first);
        }
        return av;
    }
};