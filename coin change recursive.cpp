bool comp(int a,int b)
{
    if(a>b)return true;
    return false;
}
class Solution {
public:
    vector<int> nums;
    int val,mini=INT_MAX;
    // int amt[]
   void coin(int amt,int cnt)
   {
       if(amt==val)
       {
           if(cnt<mini)
           {
               mini=cnt;
               return ;
           }
       }
       if(amt>val)return ;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=2147483647)
            {
                if(nums[i]+amt<=val)coin(amt+nums[i],cnt+1);
            }
        }
       
   }
    int coinChange(vector<int>& coins, int amount) {
        nums=coins;
        val=amount;
        sort(nums.begin(),nums.end(),comp);
        if(amount%nums[0]==0)return amount/nums[0];
        coin(0,0);
        if(mini==INT_MAX)return -1;
        return mini;
    }
};