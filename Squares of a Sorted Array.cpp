class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>alis;
        if(A.size()==0)return alis;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<A.size();i++)
        {
            pq.push(A[i]*A[i]);
        }
        
        while(!pq.empty())
        {
            int z=pq.top();
            pq.pop();
            alis.push_back(z);
        }
        return alis;
    }
};