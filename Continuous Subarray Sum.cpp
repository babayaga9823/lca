class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        if(nums.size()<2)return false;
          int acnt=0,n=nums.size(),res=0;
        map<int,int>mp;
        // if(k<0)return true;
        if(k == 0)
        {
            
            for(int i = 1; i < nums.size(); i++)
            {
                if(nums[i] == 0 && nums[i - 1] == 0) return true;
            }
            return false;
        }
        else
        {
             vector<int>sv;
           int sum=0;
           for(int i=0;i<nums.size();i++)
           {
               sum+=nums[i];
               if(sum%k==0&&i>=1)return true;
               for(int it=0;it<sv.size();it++)
               {
                  
                   if((sum-sv[it])%k==0&&i-it>=2)
                   {
                       // cout<<"sum "<<sum<<" %k "<<(sum-it)%k<<" it "<<it<<" sv "<<sv[it]<<" i "<<i<<endl;
                       return true;
                   }
               }
               sv.push_back(sum);
           }
        }
        return false;
    }
};