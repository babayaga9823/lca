class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>str(matrix),arv(matrix);
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            // vector<int>v=str[i];
            int col=n-1-i;
            for(int j=0;j<n;j++)
            {
                arv[j][col]=str[i][j];
            }
        }
        matrix=arv;
    }
};