class Solution {
public:
    
    string s;
    vector<string>rv;
    void letter(int id,string arg)
    {
        rv.push_back(arg);
        for(int i=id;i<s.length();i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                // cout<<"entered "<<endl;
                string t=arg;
                if(s[i]>='a'&&s[i]<='z')
                {
                   t[i]=s[i]-32; 
                }
                else if(s[i]>='A'&&s[i]<='Z')
                {
                    t[i]=s[i]+32; 
                }
                if(i+1<s.length())letter(i+1,t);
                else
                {
                    rv.push_back(t);
                    return ;
                }
            }
        }
         
    }
    
    vector<string> letterCasePermutation(string S) {
        vector<string>av;
        if(S.length()==0)return av;
       s=S;
       letter(0,S);
       vector<string>tmp(rv);
        rv.clear();
        return tmp;
    }
};