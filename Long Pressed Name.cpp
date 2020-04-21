class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int mark=0;
        for(int i=0;i<name.length();i++)
        {
            int z=name[i],cnt1=0,cnt2=0;
            if(typed[mark]==z)
            {
                        while(name[i]==z){
                           i++;
                            cnt1++;
                        }
                        i--;
                        while(typed[mark]==z){
                           mark++;
                            cnt2++;
                        }
                
                if(cnt1>cnt2)return false;
            }
            else return false;
        }
        return true;
    }
}; 