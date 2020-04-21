class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        priority_queue<int,vector<int>,greater<int>>ep,op;
        vector<int>rv;
        if(A.size()==0)return rv;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)ep.push(A[i]);
            else op.push(A[i]);
        }
        for(int i=0;i<A.size();i++)
        {
            if(i%2==0&&!ep.empty())
            {
                rv.push_back(ep.top());
                ep.pop();
            }
            else if(i%2==1&&!op.empty())
            {
                rv.push_back(op.top());
                op.pop();
            }
            else
            {
                if(!ep.empty())
                {
                    rv.push_back(ep.top());
                    ep.pop();
                }
                else if(!op.empty())
                {
                    rv.push_back(op.top());
                    op.pop();
                }
            }
        }
        return rv;  
    }
};