class Solution {
public:
    string fractionAddition(string expression) {
        vector<pair<int,int>>pv;
        int n=expression.length(),prcnt=0;
        for(int i=0;i<n;i++)
        {
            if(expression[i]=='-')
            {
                int lp=0;
                int dgt=0;
                i++;
                while(expression[i+lp]>=48&&expression[i+lp]<=57)
                {
                    if(expression[i+lp]!='/')dgt=dgt*10+expression[i+lp]-48;
                    lp++;
                }
                pair<int,int>p;
                p.first=-1*dgt;
                lp++;
                dgt=0;
                while(expression[i+lp]>=48&&expression[i+lp]<=57)
                {
                    if(expression[i+lp]!='/')dgt=dgt*10+expression[i+lp]-48;
                    lp++;
                }
                p.second=dgt;
                // cout<<"num "<<p.first<<"deno "<<p.second<<endl;
                pv.push_back(p);
                i=i+lp;
                i--;
            }
    else if(expression[i]>=48&&expression[i]<=57)
                {
                           int lp=0;
                            int dgt=0;
                            // cout<<"i "<<i<<endl;
                            while(expression[i+lp]>=48&&expression[i+lp]<=57)
                            {
                                if(expression[i+lp]!='/')dgt=dgt*10+expression[i+lp]-48;
                                lp++;
                            }
                            pair<int,int>p;
                            p.first=dgt;
                            lp++;
                            dgt=0;
                            while(expression[i+lp]>=48&&expression[i+lp]<=57)
                            {
                                if(expression[i+lp]!='/')dgt=dgt*10+expression[i+lp]-48;
                                lp++;
                            }
                            p.second=dgt;
                            pv.push_back(p);
                        // cout<<"num "<<p.first<<"deno "<<p.second<<endl;
                            i=i+lp;
                            i--;
                }
        }
        int z=1;
        for(auto it:pv)
        {
            z*=it.second;
        }
        // cout<<"deno "<<z<<endl;
        for(int it=0;it<pv.size();it++)
        {
            int mul=z/abs(pv[it].second);
            // /cout<<" div "<<pv[it].second<<" mul "<<mul<<endl;
            pv[it].first=mul*pv[it].first;
            // cout<<" i "<<it<<" vl "<<pv[it].first<<endl;
        }
        int sm=0;
        for(auto it:pv)sm+=it.first;
        int a=sm,b=z;
        // cout<<"a "<<a<<" b "<<b<<endl;
        while(__gcd(abs(a),b)!=1)
        {
            int d=__gcd(abs(a),b);
            a/=d;
            b/=d;
        }
        char c[1000000];
        int ccnt=0,az=abs(a);
        
        while(az!=0)
        {
            c[ccnt++]=(az%10)+48;
            az/=10;
        }
        c[ccnt]='\0';
        string t=c;
        if(a==0)t="0";
        reverse(t.begin(),t.end());
        if(a<0)t="-"+t;
        int bz=b;
        ccnt=0;
        while(bz!=0)
        {
            c[ccnt++]=(bz%10)+48;
            bz/=10;
        }
        c[ccnt]='\0';
        string de=c;
        reverse(de.begin(),de.end());
        t=t+"/"+de;
        // cout<<" s "<<t<<endl;
        return t;
    }
};




