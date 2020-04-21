/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2,restk;
        ListNode *current=NULL;
        current=l1;
        int len=0;
        while(current!=NULL)
        {
            s1.push(current->val);
            current=current->next;
           
        }
        current=l2;
        while(current!=NULL)
        {
            s2.push(current->val);
            current=current->next;
             len++;
        }
        int sz=max(s2.size(),s1.size());
        int cary=0;
        current=l2;
        for(int i=0;i<sz||cary!=0;i++)
        {
            int a=0,b=0,z=0;
            if(!s1.empty())
            {
                a=s1.top();
                s1.pop();
            }
            if(!s2.empty())
            {
                b=s2.top();
                s2.pop();
            }
            z=a+b+cary;
            cary=z/10;
            z=z%10;
            restk.push(z);
            
        }
        int i=0,mr=0;
        while(!restk.empty())
        {
            int z=restk.top();
            restk.pop();
            if(z!=0)mr++;
            if(z==0&&mr==0)continue;
            if(i<len)
            {
                current->val=z;
                if(i<len-1)current=current->next;
            }
            else
            {
                 ListNode *newly=new  ListNode(z);
                current->next=newly;
                current=current->next;
            }
            i++;
        }
        return l2;    
    }
};