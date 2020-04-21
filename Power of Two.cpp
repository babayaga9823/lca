class Solution {
public:
    bool isPowerOfTwo(int n) {
          bool flag=false;
        if(n==0)return false;
        if(n==1)return true;
        if(n%2==0)
        {
            if(n/2==1)return true;
            else flag=isPowerOfTwo(n/2);
            return flag;
        }
        else return false;
        return flag;
    }
};