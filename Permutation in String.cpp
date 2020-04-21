class Solution {
public:
    bool checkInclusion(string p, string s) {
        vector<int>sv(26,0),pv(26,0),rv;
        if(p.length()>s.length())return false;
        for(int i=0;i<p.length();i++)
        {
            pv[p[i]-'a']++;
            sv[s[i]-'a']++;
        }
        if(pv==sv)return true;
        for(int i=p.length();i<s.length();i++)
        {
            sv[s[i]-'a']++;
            sv[s[i-p.length()]-'a']--;
            if(sv==pv)return true;
        }
        return false;
    }
};