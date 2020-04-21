class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cnt,sum,maxi=INT_MIN,i,j,a[1000000]={0};
        maxi=0;
        for(i=0;i<nums.size();i++)
        {
           maxi=max(maxi+nums[i],nums[i]);
            cout<<"i "<<i<<" maxi "<<maxi<<endl;
            a[i]=maxi;
        }
        sum=INT_MIN;
        for(i=0;i<nums.size();i++)
        {
            if(a[i]>sum)sum=a[i];
        }
       return sum; 
    }
};