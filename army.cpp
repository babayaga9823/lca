#include <bits/stdc++.h>

using namespace std;


int main() {
    unsigned long long int n,k;
    cin>>n>>k;
    vector<unsigned long long int>v;
    priority_queue<unsigned long long int>pq;
    int z;
    for(unsigned long long int i=1;i<=n;i++)
    {
        int z;
        cin>>z;
        v.push_back(z);
        pq.push(z);
       
    }
    // cout<<" ++ "<<pq.size()<<endl;
    if(k<=n)
    {
        for(unsigned long long int i=0;i<k;i++)
        {
            z=pq.top();
            pq.pop();
        }
         cout<<z<<endl;
    }
    else{
        
    }
   
    return 0;
}
