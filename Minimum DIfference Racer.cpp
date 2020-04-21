#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            v.push_back(z);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<=n-2;i++)
        {
           int z=v[i+1]-v[i];
            if(z<mini)mini=z;
        }
        cout<<mini<<endl;
    }
    return 0;
}
