class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>rv(m,0);
        vector<int>alr;
        for(int i=0;i<m;i++)
        {
            rv[i]=i+1;
        }
        for(int i=0;i<queries.size();i++)
        {
            int z=queries[i];
            for(int j=0;j<m;j++)
            {
                if(rv[j]==z)
                {
                    alr.push_back(j);
                    for(int l=j;l>0;l--)
                    {
                        swap(rv[l],rv[l-1]);
                    }
                    break;
                }
            }
        }
        return alr;
    }
};