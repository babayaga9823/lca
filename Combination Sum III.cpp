class Solution {
public:
    vector<vector<int>>rv;
    int n,len;
    void permutate(vector<int>tmp,int id)
    {
       
        int z=accumulate(tmp.begin(),tmp.end(),0);
        if(tmp.size()==len&&z==n)
        {
            vector<int>psh(tmp);
            rv.push_back(psh);
            return ;
        }
        for(int i=id;i<=9;i++)
        {
             tmp.push_back(i);
             permutate(tmp,i+1);
             tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int num) {
         vector<vector<int>>arv;
        if(n>55)return arv;
        if(num==0)return arv;
        int sum=0,z=k;
        for(int i=9;i>=1,z>0;i--,z--)sum+=i;
        if(sum<num)return arv;
        z=k;
        sum=0;
        for(int i=1;i<=9,z>0;i++,z--)sum+=i;
        if(sum>num)return arv;
        n=num;
        len=k;
        vector<int>tmp;
        permutate(tmp,1);
        arv=rv;
        rv.clear();
        return arv;
    }
};