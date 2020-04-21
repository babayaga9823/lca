class Solution {
public:
    bool flg[1000000]={false};
    int vist[1000000]={0};
    vector<int> nums;
    bool jump(int indx)
    {
        int i=1;
        bool flag=false;
        if(nums[indx]==0&&indx<nums.size()-1)return false;
        if(nums[indx]>=0&&indx==nums.size()-1)return true;
         while(i<=nums[indx]&&flag==false)
        {
            // cout<<" jump from "<<indx<<" to "<<indx+i<<endl;
             if(vist[indx+i]==0)
             {
                 flag=jump(indx+i);
                 flg[indx+i]=flag;
                 vist[indx+i]=1;
             }
             else flag=flg[indx+i];
            
            i++;
        }
        
        if(flag)return true;
        return false;
    }
        
    bool canJump(vector<int>& v) {
        nums=v;
        if(nums.size()==0)return false;
        if(jump(0))return true;
        return false;
    }
};