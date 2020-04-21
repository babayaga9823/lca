class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,cnt=0,max=0;
        for(i=0;i<s.length();i++)
        { 
            int h[150]={0};
            j=i;
            cnt=0;
            int rep=0;
            set<char>st;
            while(j<s.length()&&h[s[j]]==0&&st.length()<=k)
            {
                h[s[j]]=1;
                st.insert(s[i]);
                j++;
                cnt++;
            }
            if(cnt>max)max=cnt;
        }
        if(cnt>max)max=cnt;
        return max;
    }
    
};