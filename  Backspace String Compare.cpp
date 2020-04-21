class Solution {
public:
    vector<char> caller(string S)
    {
           stack<char>st;
        vector<char>v;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='#'&&st.empty())
            {
                
            }
            else if(S[i]=='#'&&!st.empty())
            {
                st.pop();
            }
            else if(S[i]!='#')
            {
                st.push(S[i]);
            }
        }
        int alz=st.size();
        for(int i=0;i<alz;i++)
        {
            v.push_back(st.top());
            st.pop();
        }
        return v;
    }
    
    
    
    bool backspaceCompare(string S, string T) 
    {
            vector<char>sv,tv;
        sv=caller(S);
        tv=caller(T);
        if(sv==tv)return true;
        return false;
    }
};