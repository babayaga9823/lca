class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        if(s.length()==0)return s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            { int cnt=0,acnt=0;
              char ar[1000000]={0};
                while(cnt+i<s.length()&&s[i+cnt]!=' ')
                {
                    ar[acnt++]=s[cnt+i];
                    cnt++;
                }
             ar[cnt]='\0';
             i=cnt+i;
             string as=ar;
             v.push_back(as);
            }
        }
        reverse(v.begin(),v.end());
        int z=v.size();
        string as="";
        int i=0;
        for(auto it:v)
        {
            as+=it;
            if(i<v.size()-1)as+=" ";
            i++;
        }
        // cout<<as<<endl;
        return as;
    }
};