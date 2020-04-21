class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        if(arr.size()==0||k<=0)return 0;
        int tot=0,n=arr.size(),sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        if(sum/k>=threshold)tot++;
        for(int i=k;i<n;i++)
        {
            sum-=arr[i-k];
            sum+=arr[i];
            if(sum/k>=threshold)tot++;
        }
        return tot;
    }
};