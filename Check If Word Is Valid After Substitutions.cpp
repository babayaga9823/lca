class Solution {
public:
    bool isValid(string S) {
        if(S=="")return true;
        if(S==" ")return false;
        string temp=S;
        int count=S.length(),maxcnt=S.length();
        bool flag=true;
        char ar[1000000]={0};
        while(flag)
        {
            int mp=0;
            for(int i=0;i<=temp.length()-3;i++)
            {
                if(temp[i]=='a'&&temp[i+1]=='b'&&temp[i+2]=='c')
                {
                    mp++;
                    temp[i]=43;
                    temp[i+1]=43;
                    temp[i+2]=43;
                    i=i+2;
                }
            }
            
            int acnt=0;
            for(int i=0;i<temp.length();i++)
            {
                if(temp[i]!='+')ar[acnt++]=temp[i];
            }
            ar[acnt]='\0';
            // cout<<" br "<<temp<<endl;
            temp=ar;
            // cout<<" ed "<<temp<<endl;
        if(temp=="abc"||temp=="")return true;
            if(temp.length()<3)return false;
            if(mp>0)flag=true;
            else flag=false;
        }
        return false;
        
    }
}; 