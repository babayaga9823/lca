class Solution {
public:
    bool isPowerOfFour(int n) {
           bool flag=false;
        if(n==0)return false;
        if(n==1)return true;
        if(n%4==0)
        {
            if(n/4==1)return true;
            else flag=isPowerOfFour(n/4);
            return flag;
        }
        else return false;
        return flag;
    }
};