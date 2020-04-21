bool comp(pair<int,int>a,pair<int,int>b)
{
   if(a.second>b.second)return true;
    if(a.second==b.second)
    {
        if(a.first<b.first)return true;
    }
    return false;
}
class Solution {
public:
    string frequencySort(string s) {
       string als;
        // int a[26]={0};
        pair<int,int>pr[123];//index freq
        for(int i=0;i<s.length();i++)
        {
            int z=s[i];
                pr[z].first=z;
                pr[z].second+=1;
            
        }
        sort(pr,pr+123,comp);
        char a[s.length()+1];
        int acnt=0;
        for(int i=0;i<123;i++)
        {
            int z=pr[i].second;
            while(z--)
            {
               a[acnt++]=pr[i].first;  
            }
        }
        a[acnt]='\0';
        als=a;
        return als;
    }
};