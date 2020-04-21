class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        for(int l=0;l<shift.size();l++)
        {
            int dir=shift[l][0],amt=shift[l][1];
            int k=s.length();
            
            if(dir==0)
            {
                // cout<<" if "<<l<<endl;
                string tmp=s;
                for(int i=0;i<s.length();i++)
                {
                    int id=(i-amt)%k;
                    if(id<0)id+=k;
                    tmp[id]=s[i];
                }
                s=tmp;
            }
            else if(dir==1)
            {
                string tmp=s;
                // cout<<" else "<<l<<endl;
                for(int i=0;i<s.length();i++)
                {
                    tmp[((i+amt)%k)]=s[i];
                }
                s=tmp;
            }
        }
        return s;
    }
};