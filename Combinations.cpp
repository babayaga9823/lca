class Solution {
public:
    set<vector<int>>rst;
    int n,aim;
    vector<int>v;
    void combination(int id,vector<int>tmp)
    {
        for(int i=id;i<=n;i++)
        {

           if(tmp.size()==aim)
           {
               rst.insert(tmp);
               return ;
           }
           else if(tmp.size()<aim)
           {
               vector<int>arg(tmp);
               arg.push_back(i);
               if(i+1<=n)combination(i+1,arg);
               else
               {
                  if(arg.size()==aim)rst.insert(arg);
                   return ;
               }
           }
           else if(tmp.size()>aim)
           {
               return ;
           }
        }
    }
    
    
    vector<vector<int>> combine(int num, int k) {
        vector<int>tmp;
        n=num;
        aim=k;
        combination(1,tmp);
        vector<vector<int>>arv(rst.begin(),rst.end());
        v.clear();
        rst.clear();
        return arv;
    }
    
};