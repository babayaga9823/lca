#include <bits/stdc++.h>

using namespace std;


int main() {
    int p=0,q=0,r=0,n=0;
    cin>>p>>q>>r>>n;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {   
            int z=(n-(p*i+q*j))/r;
            if(z>=0&&z<=100000000&&p*i+q*j+r*z==n)
            {
                cout<<i<<" "<<j<<" "<<z<<endl;
                    return 0;
            }
        }
    }
    return 0;
}
