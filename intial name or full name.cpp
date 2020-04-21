#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>mp;
        string afn,asn;
        vector<string>alv;
        vector<string>afinnam;
        for(int i=0;i<n;i++)
        {
             cin>>afn;
                cin>>asn;
            alv.push_back(afn);
            mp[afn]++;
            afn=afn+" "+asn;
            afinnam.push_back(afn);
        }
        for(int i=0;i<n;i++)
        {
            string t=alv[i];
            if(mp[t]==1)
            {
                cout<<t<<endl;
            }
            else cout<<afinnam[i]<<endl;
        }
    }
    return 0;
}
