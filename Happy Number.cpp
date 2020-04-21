class Solution {
public:
    bool isHappy(int n) {
        int z=n;
        set<int>st;
        while(z!=1&&z>0)
        {   int al=z,cnt=0;
            while(al!=0)
            {
                cnt+=pow(al%10,2);
                al/=10;
            }
            if(st.find(cnt)!=st.end())return false;
            else st.insert(cnt);
            z=cnt;
        }
        if(z==1)return true;
        return false;
    }
};