class Solution {
public:
    string solveEquation(string equation) {
        vector<int>vx,nx;
        int i;
        for(i=0;i<equation.length()&&equation[i]!='=';i++)
        {
            if(equation[i]=='x')
            {
                vx.push_back(1);
            }
            else if(equation[i]=='-'&&equation[i+1]=='x')
            {
                vx.push_back(-1);
                i++;
            }
            else if((equation[i]>=48&&equation[i]<=57)||(equation[i]=='-'))
            {
                int lp=0,neg=0;
                if(equation[i]=='-')
                {
                    lp++;
                    neg++;
                }
                int dgt=0;
                while(equation[i+lp]>=48&&equation[i+lp]<=57)
                {
                    dgt=dgt*10+(equation[i+lp]-48);
                    lp++;
                }
                if(equation[i+lp]=='x')
                {
                    i=i+lp;
                    if(neg)vx.push_back((-1)*dgt);
                    else vx.push_back(dgt);
                }
                else 
                {
                    i=i+lp;
                    i--;
                    if(neg)nx.push_back((-1)*dgt);
                    else nx.push_back(dgt);
                }
            }
        }
        int nml=accumulate(nx.begin(),nx.end(),0);
        int  xl=accumulate(vx.begin(),vx.end(),0);
        int strind=i+1;
        vector<int>vrx,nrx;
         for(int i=strind;i<equation.length();i++)
        {
            if(equation[i]=='x')
            {
                vrx.push_back(1);
            }
            else if(equation[i]=='-'&&equation[i+1]=='x')
            {
                vrx.push_back(-1);
                i++;
            }
            else if((equation[i]>=48&&equation[i]<=57)||(equation[i]=='-'))
            {
                int lp=0,neg=0;
                if(equation[i]=='-')
                {
                    lp++;
                    neg++;
                }
                int dgt=0;
                while(equation[i+lp]>=48&&equation[i+lp]<=57)
                {
                    dgt=dgt*10+(equation[i+lp]-48);
                    lp++;
                }
                if(equation[i+lp]=='x')
                {
                    i=i+lp;
                    if(neg)vrx.push_back((-1)*dgt);
                    else vrx.push_back(dgt);
                }
                else 
                {
                    i=i+lp;
                    i--;
                    if(neg)nrx.push_back((-1)*dgt);
                    else nrx.push_back(dgt);
                }
            }
        }
        int nmr=accumulate(nrx.begin(),nrx.end(),0);
        int  xr=accumulate(vrx.begin(),vrx.end(),0);
        int totnum=nmr-nml;
        int totx=xl-xr;
        // cout<<" x "<<xl<<" nm "<<nmr<<" xr "<<xr<<" nml "<< nml<<endl;
        // cout<<" totx "<<totx<<" totnum "<<totnum<<endl;
        if(totx==0&&totnum!=0)return "No solution";
        if(totx==0&&totnum==0)return "Infinite solutions";
        int a=abs(totx),b=abs(totnum),neg=0;
        if(totx<0||totnum<0)neg++;
        if(totx<0&&totnum<0)neg=0;
        // cout<<"a "<<a<<" b "<<b<<endl;
        while(__gcd(abs(a),b)!=1)
        {
            int d=__gcd(abs(a),b);
            a/=d;
            b/=d;
        }
        totx=a;
        if(neg)totnum=(-1)*b;
        else totnum=b;
        
        string xs;
        if(totx==1)xs="x";
        else xs=to_string(totx)+"x";
        string rt=xs+"="+to_string(totnum);
        // cout<<rt<<endl;
        return rt;
        
    }
};