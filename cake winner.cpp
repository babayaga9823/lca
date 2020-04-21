#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int x,y;
        x=m;
        y=n;
        for(int i=1;;i++)
        {
            if(i%2==1)//sebin
            {
                if(x-i>=0)
                {
                    x-=i;
                }
                else
                {
                    cout<<"Sinoy"<<endl;
                    break;
                }
            }
            else//seny
            {
                if(y-i>=0)
                {
                    y-=i;
                }
                else
                {
                    cout<<"Sebin"<<endl;
                    break;
                }
            }
            
        }
    }
    return 0;
}