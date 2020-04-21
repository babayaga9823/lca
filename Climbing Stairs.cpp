class Solution {
public:
    int ar[1000000]={0,1,2};
    int climbStairs(int n) {
        if(n<=0)return 0;
        if(n==1)return 1;
        if(n==2)return 2;
        int a=0,b=0;
        if(ar[n-1]==0)
        {
            a=climbStairs(n-1);
            ar[n-1]=a;
        }
        else a=ar[n-1];
         if(ar[n-2]==0)
        {
            b=climbStairs(n-2);
            ar[n-2]=b;
        }
        else b=ar[n-2];
       return a+b;
    }
};