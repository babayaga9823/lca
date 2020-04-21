class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int tot=0,ind=0,val=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            tot+=nums[i];
            if(tot>=s)
            {
                int az=i-ind+1;
                if(az<val)val=az;
            }
            while(tot-nums[ind]>=s)
            {
                // cout<<" ++ "<<i<<" ind "<<ind<<" tot "<<tot<<endl;
                tot-=nums[ind];
                int z=i-ind;
                if(z<val)val=z;
                ind++;
            }
        }
        if(val==INT_MAX&&tot<s)return 0;
        if(val==INT_MAX&&tot>=s)return nums.size();
        return val;
    }
};


// 7
// [2,3,1,2,4,3]
// 9
// [2,3,1,2,4,3]
// 11
// [1,2,3,4,5]