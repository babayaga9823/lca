class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),i=0,j=0;
        for(i=0;i<m;i++)
        {
        	if(target>matrix[i][n-1]){}
        		else break;
        }
        for(j=0;j<n&&i<m;j++)
        {
        	if(matrix[i][j]==target)return true;
        }
        return false;
    }
};