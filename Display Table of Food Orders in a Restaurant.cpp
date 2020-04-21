class Solution {
public:
    
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        map<int,vector<string>>mp;
        vector<vector<string>>rt;
        set<string>menust;
        if(orders.size()==0)return rt;
        for(int i=0;i<orders.size();i++)
        {
            vector<string>v=orders[i];
            int z=stoi(v[1]);
            if(mp.find(z)!=mp.end())
            {
                for(int j=2;j<v.size();j++)
                {
                    menust.insert(v[j]);
                    mp[z].push_back(v[j]);
                }
            }
            else
            {
                vector<string>tmp;
                for(int j=2;j<v.size();j++)
                {
                    menust.insert(v[j]);
                    tmp.push_back(v[j]);
                }
                mp[z]=tmp;
            }
        }
        vector<string>ar;
        map<string,int>menu;
        ar.push_back("Table");
        for(auto it:menust)
        {menu[it]=0;
            ar.push_back(it);
        }
        rt.push_back(ar);
        for(auto it:mp)
        {
            map<string,int>tmpmenu(menu);
            for(auto ot:it.second)
            {
                tmpmenu[ot]++;
            }
            vector<string>temp;
            temp.push_back(to_string(it.first));
           for(auto gt:tmpmenu)
           {
               temp.push_back(to_string(gt.second));
           }
            rt.push_back(temp);
        }
        return rt;
    }
};