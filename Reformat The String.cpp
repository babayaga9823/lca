class Solution {
public:
    string reformat(string s) {
        queue<char>qr,num;
        int nu=0,alp=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48&&s[i]<=57)
            {
                qr.push(s[i]);
                nu++;
            }
            else 
            {
                num.push(s[i]);
                alp++;
            }
        }
        queue<char>str,en;
        str=nu>alp?qr:num;
       if(str==num)en=qr;
        else en=num;
        string rt="";
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0&&!str.empty())
            {
                rt+=str.front();
                str.pop();
            }
            else if(i%2==1&&!en.empty())
            {
                rt+=en.front();
                en.pop();
            }
            else 
            {
                break;
            }
        }
        if(rt.length()<s.length())return "";
        return rt;
    }
};