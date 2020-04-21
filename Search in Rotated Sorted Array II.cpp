class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set<int>st(nums.begin(),nums.end());
        return st.find(target)!=st.end()?true:false;
    }
};