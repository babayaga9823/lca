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
};