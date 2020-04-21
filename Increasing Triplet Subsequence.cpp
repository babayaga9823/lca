class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i,j,z;
        vector<int>lef,rig;
        if(nums.size()==0)return false;
        z=nums[0];
        
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>z)
            {
                lef.push_back(1);
            }
            else
            {z=nums[i];
             // cout<<" lef "<<i<<endl;
             lef.push_back(0);
            }
        }
        z=nums[nums.size()-1];
        for(i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<z)
            {
                rig.push_back(1);
            }
            else{
                z=nums[i];
                // cout<<" rig "<<i<<endl;
                rig.push_back(0);
            } 
        }
        reverse(rig.begin(),rig.end());
        // cout<<" ++ "<<lef.size()<<" "<<rig.size()<<endl;
        for(i=0;i<nums.size();i++)
        {
            // cout<<" ++ "<<lef[i]<<" "<<rig[i]<<endl;
            if(lef[i]&&rig[i])
            {
                // cout<<"** "<<i<<endl;
                return true;
            }
        }
        return false;
    }
};