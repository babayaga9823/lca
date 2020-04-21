bool comp(string a,string b)
{
if(a+b>b+a)return true;
    return false;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        char ar[1000000]={0};
        vector<string>pq;
        for(int i=0;i<nums.size();i++)
        {
            int z=nums[i],acnt=0;
            if(z==0)
            {
                ar[acnt++]=48;
            }
            else{
                while(z!=0)
                {
                    ar[acnt++]=(z%10)+48;
                    z/=10;
                }
            }
            ar[acnt]='\0';
            string t=ar;
            // cout<<t<<endl;
            reverse(t.begin(),t.end());
            pq.push_back(t);
        }
        string s="";
        sort(pq.begin(),pq.end(),comp);
        for(auto it:pq)s+=it;
        if(s[0]=='0') return "0";
                
        return s;
    }
};