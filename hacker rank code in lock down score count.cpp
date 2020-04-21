#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int pos=0,neg=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s2[i])pos++;
            else if(s1[i]!=s2[i]&&s2[i]=='N'){}
            else 
            {
               if(i<n-1)
               {
                  neg++;
                   i++;
               }
                   
            }
        }
        pos=pos-neg;
        cout<<pos<<endl;
    }
    return 0;
}
