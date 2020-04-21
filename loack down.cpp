#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
 cin>>t;
 while(t--)
{
     int n,k,cnt=0,flag=0;
     cin>>n>>k;
        if(n==0)
        {
            cout<<0<<endl;
            return 0;
        }
     int al[n]={0};
     for(int i=0;i<n;i++)
     {
         cin>>al[i];
         cnt+=al[i];
     }
     for(int i=0;i<n;i++)
     {
        int z=al[i],sum=0;
         sum=cnt-z;
         z+=k;
         if(z>sum)flag++;
     }

    cout<<flag<<endl;

}
    return 0;
}