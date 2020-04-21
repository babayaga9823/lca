class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      if(nums.size()==0)return 0;
      int acnt=0,n=nums.size();
      map<int,int>mp;
      vector<int>sv;
      int sum=0,res=0;
      for(int i=0;i<nums.size();i++)
      {
         sum+=nums[i];
         if(sum%k==0) res++;
         for(int it=0;it<sv.size();it++)
         {

             if((sum-sv[it])%k==0)
             {
                 // cout<<"sum "<<sum<<" %k "<<(sum-it)%k<<" it "<<it<<" sv "<<sv[it]<<" i "<<i<<endl;
                res++;
             }
         }
         sv.push_back(sum);
      }
            
           
        return res;
    }
};
