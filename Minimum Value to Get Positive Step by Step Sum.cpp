class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size(),i=0;
        if(n==0)return 0;
        for(i=1;;i++)
        {
            int tot=i,j;
            for(j=0;j<n;j++)
            {
                tot=nums[j]+tot;
                if(tot<=0)break;
            }
            if(j==n)return i;
        }
        return 0;
    }
};