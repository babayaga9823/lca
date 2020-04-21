#include <bits/stdc++.h>

using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--)
    {string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        char a[1000000]={0};
        int cnt=0;
     set<string>st1,st2;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=' ')
            {
                a[cnt++]=s1[i];
            }
            else
            {
                a[cnt]='\0';
                string af=a;
                st1.insert(af);
                cnt=0;
            }
        }
                a[cnt]='\0';
                string af=a;
                st1.insert(af);
     cnt=0;
     for(int i=0;i<s2.length();i++)
        {
            if(s2[i]!=' ')
            {
                a[cnt++]=s2[i];
            }
            else
            {
                a[cnt]='\0';
                string af=a;
                st2.insert(af);
                cnt=0;
            }
        }
                a[cnt]='\0';
                 af=a;
                st2.insert(af);
         cnt=0;
             for(auto it:st1)
             {
                if(st2.find(it)!=st2.end())cnt++;
             }
     if(cnt>=st1.size()/2)cout<<"similar"<<endl;
     else cout<<"dissimilar"<<endl;
    }
    return 0;
}
