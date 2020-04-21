#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vs,vaf;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            vs.push_back(z*40);
        }
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            vaf.push_back(z*20);
        }
        for(int i=0;i<n;i++)
        {
            int z;
           z=vs[i]-vaf[i];
            if(z>maxi)maxi=z;
        }
        cout<<maxi<<endl;
    }
    return 0;
}
