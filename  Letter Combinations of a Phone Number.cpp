class Solution {
public:
    map<int,vector<char>>mp;
    string inp;
    vector<string>ret;
    
     void phone(int id,string s)
        {
            int z=inp[id]-48;
            for(int i=0;i<mp[z].size();i++)
            {
                if(id+1<inp.length())phone(id+1,s+mp[z][i]);
                if(id+1==inp.length())
                {
                    ret.push_back(s+mp[z][i]);
                }
               
            }
        }
    
    vector<string> letterCombinations(string digits) {
        inp=digits;
        vector<string>res;
        if(digits.length()==0)return res;
        int ct=0;
        for(int i=2;i<=6;i++)
        {
            int z=97+ct;
            vector<char>v;
            for(int j=0;j<3;j++)
            {
                char c=z+j;
                v.push_back(c);
            }
            mp[i]=v;
            ct+=3;
        }
       vector<char>v;
        v.push_back('p');
        v.push_back('q');
        v.push_back('r');
        v.push_back('s');
        mp[7]=v;
        v.clear();
        v.push_back('t');
        v.push_back('u');
        v.push_back('v');
        mp[8]=v;
        v.clear();
        v.push_back('w');
        v.push_back('x');
        v.push_back('y');
        v.push_back('z');
        mp[9]=v;
        string tmp="";
        phone(0,tmp);
        vector<string>temp(ret);
        ret.clear();
        return temp;
    }
};




// for(auto it:mp)
//        {
//            cout<<it.first<<" ";
//            for(auto ot:it.second)cout<<ot<<" ";
//            cout<<endl;
//        }