class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int alp1=0,alp2=0,als=m;
        if(nums1.size()==0&&nums2.size()==0)return ;
        if(nums1.size()!=0&&nums2.size()==0)return ;
        if(nums1.size()==0&&nums2.size()!=0)
        {
            int z=nums1.size();
            for(int i=0;i<nums2.size();i++)
            {
                if(i<z)nums1[i]=nums2[i];
                else nums1.push_back(nums2[i]);
            }
        }
        vector<int>v;
        for(int i=0;i<m+n;i++)
        {
            
            if(alp1<m&&alp2<n&&nums1[alp1]<=nums2[alp2])
            {
                v.push_back(nums1[alp1]);
                alp1++;
            }
            else if(alp1<m&&alp2<n&&nums1[alp1]>nums2[alp2])
            {
                v.push_back(nums2[alp2]);
                alp2++;
            }
            else if(alp1==m&&alp2<n)
            {
                v.push_back(nums2[alp2]);
                alp2++;
            }
            else if(alp1<m&&alp2==n)
            {
                v.push_back(nums1[alp1]);
                alp1++;
            }
            
        }
    
        int z=nums1.size();
        for(int i=0;i<v.size();i++)
        {
            if(i<z)nums1[i]=v[i];
            else nums1.push_back(v[i]);
        }
    }
};