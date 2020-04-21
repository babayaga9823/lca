class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>alv;
        if(matrix.size()==0)return 0;
        for(int i=0;i<matrix.size();i++)
        {
            vector<int>v=matrix[i];
            for(int j=0;j<v.size();j++)alv.push_back(v[j]);
        }
        sort(alv.begin(),alv.end());
        int z;
        for(int i=0;i<k;i++)z=alv[i];
        return z;
    }
};