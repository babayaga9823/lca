class Solution {
public:
    int numTeams(vector<int>& rating) 
    {
        if(rating.size()==0)return 0;
        vector<int>lv(rating.size(),0),rv(rating.size(),0);
        lv[0]=0;
        int lfmin=rating[0];
        for(int i=1;i<rating.size();i++)
        {
            if(rating[i]>lfmin)lv[i]=1;
            else
            {
                lv[i]=0;
                if(lfmin>rating[i])lfmin=rating[i];
            }
        }
        int sz=rating.size();
        rv[sz-1]=0;
        int rtmx=rating[sz-1];
        for(int i=sz-2;i>=0;i--)
        {
            if(rating[i]<rtmx)rv[i]=1;
            else
            {
                rv[i]=0;
                if(rtmx<rating[i])rtmx=rating[i];
            }
        }
        int tot=0;
        for(int i=1;i<sz-1;i++)
        {
            if(lv[i]==1&&rv[i]==1)
            {
                // cout<<" lp 1 "<<endl;
                tot++;
            }
        }
        
        //phase 2 starts
        
        lv.clear();
        rv.clear();
        vector<int>tmp(rating);
        sort(tmp.begin(),tmp.end());
       if(tmp==rating)//increasing or decresing
       {
            reverse(rating.begin(),rating.end());
       }
       else
       {
            
        
       }
       int ltmx=rating[0];
        for(int i=1;i<rating.size();i++)
        {
            if(ltmx>rating[i])lv[i]=1;
            else
            {
                lv[i]=0;
                if(ltmx<rating[i])lfmin=rating[i];
            }
        }
        
        rv[sz-1]=0;
        int rtmin=rating[sz-1];
        for(int i=sz-2;i>=0;i--)
        {
            if(rating[i]>rtmin)rv[i]=1;
            else
            {
                rv[i]=0;
                if(rtmin>rating[i])rtmin=rating[i];
            }
        }
        for(int i=1;i<sz-1;i++)
        {
            if(lv[i]==1&&rv[i]==1)
            {
                // cout<<" lp 1 "<<endl;
                tot++;
            }
        }

       return tot;
    }
};