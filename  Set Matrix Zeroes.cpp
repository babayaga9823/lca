class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>>st;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    // cout<<" +i "<<i<<" +j "<<j<<endl;
                    pair<int,int>pr;
                    pr.first=i;
                    pr.second=j; 
                    st.insert(pr);
                }
                
            }
        }
        for(auto it:st)
        {
            // cout<<" i "<<it.first<<" j "<<it.second<<endl;
            //for column
            for(int i=0;i<n;i++)
            {
                matrix[it.first][i]=0;
            }
            //for row
            for(int i=0;i<m;i++)
            {
                matrix[i][it.second]=0;
            }
        }
    }
};