class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>pv(26,0),sv(26,0),rv;
        if(s.length()<p.length())return rv;
        for(int i=0;i<p.length();i++)
        {
            pv[p[i]-'a']++;
            sv[s[i]-'a']++;
        }
        if(pv==sv)rv.push_back(0);
        for(int i=p.length();i<s.length();i++)
        {
            sv[s[i]-'a']++;
            sv[s[i-p.length()]-'a']--;
            if(sv==pv)rv.push_back(i-p.size()+1);
        }
        return rv;
    }
};