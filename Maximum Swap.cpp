 bool comp(char a,char b)
    {
        if(a>b)return true;
        return false;
    }
class Solution {
public:
    
    int maximumSwap(int num) {
        string tmp=to_string(num),rev;
        rev=tmp;
        sort(rev.begin(),rev.end(),comp);
        int maxind=0,flag=0,maxi=0,mini=INT_MAX,minid=0,mark=0,fst=0,swapid=0,mtch=0;
        for(int i=0;i<tmp.length();i++)
        {
            if(tmp[i]!=rev[i]&&mtch==0)
            {
                mtch++;
                swapid=i;
            }
            if(tmp[i]-48>=maxi)
            {
               if(tmp[i]!=rev[i])
               {
                    maxi=tmp[i]-48;
                    maxind=i;
                    flag++;
               }
            }
        }
        if(flag)swap(tmp[swapid],tmp[maxind]);

        int z=stoi(tmp);
        return z;
    }
};