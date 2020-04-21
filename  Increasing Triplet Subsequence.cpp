class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i,j,z;
        vector<int>lef,rig;
        if(nums.size()==0)return false;
        z=nums[0];
        lef.push_back(0);
        for(i=1;i<nums.size();i++)
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
        rig.push_back(0);
        for(i=nums.size()-2;i>=0;i--)
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
        int sz=nums.size();
        for(i=1;i<=sz-2;i++)
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