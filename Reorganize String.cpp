class Solution {
public:
    string reorganizeString(string S) {
        map<char,int>mp;
        if(S=="")return S;
        priority_queue<pair<int,pair<char,int>>>pq;
        int freq=0;
        for(int i=0;i<S.length();i++)
        {
            mp[S[i]]++;
            
        }
        string ra="";
        int count=S.length(),prcnt=0;
        for(auto it:mp)
        {
            pair<int,pair<char,int>>pr;
            pr.first=it.second;
            pr.second=it;
            pq.push(pr);
        }
        stack<pair<int,pair<char,int>>>stk;
        while(!pq.empty()&&S.length()!=ra.length())
        {
            // int freqchr=pq.top().first;
            // pair<char,int>it=pq.top().second;
            // pq.top().second.second--;
            // pq.top().first--;
           
            if(pq.size()==1||ra.length()==0||(pq.top().first>0&&pq.top().second.first!=ra[ra.size()-1]))
            { 
                // cout<<"Entered Here if "<<endl;
                 pair<int,pair<char,int>>tmppr=pq.top();
                  pq.pop();
                pair<char,int>it=tmppr.second;
                tmppr.first--;
                if(tmppr.first>0)
                {
                    tmppr.second.second--;
                    pq.push(tmppr);
                }
                char c[2];
                c[0]=it.first;
                c[1]='\0';
                 string temp=c;
                ra+=temp;
                while(!stk.empty())
                {
                    pq.push(stk.top());
                    stk.pop();
                }
            }
            else if(pq.top().first>0&&pq.top().second.first==ra[ra.size()-1])
            {
                
                stk.push(pq.top());
                pq.pop();
            }
            
            
        }
        // cout<<" && "<<ra<<endl;
        for(int i=0;i<=ra.length()-2;i++)
        {
            if(ra[i]!=ra[i+1]){}
            else return "";
        }
        return ra;
    }
};