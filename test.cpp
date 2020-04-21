class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]+=1;
        }
        int alst,lpcnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0&&mp.size()!=0)
            {
                v.push_back(mp.begin()->first);
                int vl=mp.begin()->first;
                int z=mp.begin()->second;
                z--;
                // cout<<" ** "<<z<<endl;
                // mp.begin()->second= z;
                mp[vl]=z;
                alst=vl;
            }
            else
            {
                
                
                cout<<"Working "<<i<<endl;
                if(i%2==0)
                {
                    cout<<" If err "<<i<<endl;
                    for(auto it=mp.begin();it!=mp.end();it++)
                    {
                        if((*it).first<alst&&(*it).second>0)
                        {
                            v.push_back((*it).first);
                            // (*it).second--;
                            mp[(*it).first]--;
                            alst=(*it).first;
                            break;
                            
                        }
                    }
                }
                else if(i%2==1)
                {
                    cout<<" Else err "<<i<<endl;
                     for(auto it=mp.begin();it!=mp.end();it++)
                    {
                        if((*it).first>alst&&(*it).second>0)
                        {
                            v.push_back((*it).first);
                            mp[(*it).first]--;
                            alst=(*it).first;
                            break;
                        }
                    }
                }
            }
            lpcnt++;
            if(lpcnt>=3)
            {
                lpcnt=0;
                i--;
            }
        }
        // for(int i=0;i<nums.size();i++)nums[i]=v[i];
    }
};