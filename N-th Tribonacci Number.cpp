class Solution {
public:
    int tri[1000000]={0,1,1};
    int tribonacci(int n) {
        if(n<=0)return 0;
        if(n==1||n==2)return 1;
        int a=0,b=0,c=0;
        if(n>=0&&tri[n-1]==0)
        {
             a=tribonacci(n-1);
            tri[n-1]=a;
        }
        else a=tri[n-1];
        if(n>=0&&tri[n-2]==0)
        {
             b=tribonacci(n-2);
            tri[n-2]=b ;
        }
        else b=tri[n-2];
        if(n>=0&&tri[n-3]==0)
        {
             c=tribonacci(n-3);
            tri[n-3]=c ;
        }
        else c=tri[n-3];
        return a+b+c;
    }
};