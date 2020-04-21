class Solution {
public:
    
    int isprim(int n)
    {
        bool a[n];
        int cnt=0;
        for(int i=0;i<n;i++)a[i]=true;
        
        
        for(int i=2;i*i<=n;i++)
        {
            for(int j=2;i*j<n&&a[i]==true;j++)
            {
                if(a[i]==true)
                {
                    a[i*j]=false;
                }
            }
        }
        
        
        for(int i=2;i<n;i++)
        {
            if(a[i]==true)cnt++;
        }
        
        return cnt;
    }
    
    
    
    int countPrimes(int n) {
        if(n<=0)return 0;
        int cnt=0;
        return isprim(n);
    }
};