class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int left=0,res=0,pro=1,right=0;
        for(right=0;right<nums.size();right++)
        {
            pro*=nums[right];
            while(left<=right&&pro>=k)
            {
                pro/=nums[left];
                left++;
            }
            res+=(right-left+1);
        }
        return res;
    }
};
//left<=right condition is used instead of < becoz in cases where ith element >k
//right-left will become -1 and right-left+1 will be zero ,thuse that element >k
//will not be counted

//res+=right-left+1 is used because it considersall the probabilitites of set formation