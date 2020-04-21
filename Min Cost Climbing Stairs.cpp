class Solution {
public:
    int ar[1000000]={0};
    vector<int>v;
    int climbStairs(int n) {
        if(n<0)return 0;
        if(n==0)return v[0];
        if(n==1)return v[1];
        int a=0,b=0;
        if(ar[n-1]==0)
        {
            a=climbStairs(n-1);
            if(n-1>1)a=a+v[n-1];
            ar[n-1]=a;
        }
        else a=ar[n-1];
         if(ar[n-2]==0)
        {
            b=climbStairs(n-2);
            if(n-2>1)b=b+v[n-2];
            ar[n-2]=b;
        }
        else b=ar[n-2];
        // cout<<"ret "<<min(a,b)<<endl;
       return min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==0)return 0;
        for(int i=0;i<cost.size();i++)v.push_back(cost[i]);
        int az=climbStairs(cost.size());
        v.clear();
        return az;
    }
};