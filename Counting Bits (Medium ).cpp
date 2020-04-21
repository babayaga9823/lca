class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a=1,cnt=0;
        for(int i=0;i<32;i++)
        {
            if(n&a)cnt++;
            if(i<31)a=a<<1;
        }
        // cout<<cnt<<endl;
        return cnt;
    }
    vector<int> countBits(int num) {
        vector<int>v;
        if(num<0)return v;
        
        v.push_back(0);
        if(num==0)return v;
        for(int i=1;i<=num;i++)
        {
            v.push_back(hammingWeight(i));
        }
        return v;
    }
};