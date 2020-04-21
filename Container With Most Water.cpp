class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,maxiw=0;
        while(i<j)
        {
            int ht=min(height[i],height[j]),wtr=min(height[i],height[j])*(j-i);
            if(wtr>maxiw)
            {
                maxiw=wtr;
            }
            while(i<j&&height[i]<=ht)i++;
            while(i<j&&height[j]<=ht)j--;
        }
        return maxiw;
    }
};