class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==0)return 0;
        if(k>=nums.size())
        {
            cout<<"*** "<<k<<" "<<nums.size()<<endl;
            double z=accumulate(nums.begin(),nums.end(),0);
            return z/nums.size();
        }
        double alis=0,maxi=INT_MIN,sum=0;
        for(int i=0;i<k;i++)sum+=nums[i];
        sum-=nums[k-1];
        for(int i=0;i<=nums.size()-k;i++)
        {
            sum+=nums[i+k-1];
            alis=sum/k;
            if(alis>maxi)maxi=alis;
            sum-=nums[i];
        }
        // double zer=0;
        // maxi=maxi>0?maxi:0;
        // if(maxi<0)maxi=zer;
        return maxi;
    }
};