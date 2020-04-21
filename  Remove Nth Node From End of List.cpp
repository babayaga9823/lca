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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *current=head,*alcur=NULL,*prev=head;
        if(head==NULL)return alcur;
        if(head->next==NULL)return  alcur;
        map<int,ListNode*>mp;//indev and pointer
        int cnt=0;
        
        while(current!=NULL)
        {
            
            mp[cnt]=current;
            cnt++;
         current=current->next;
            
        }
        mp[cnt]=NULL;
       if(cnt-n-1>=0) current=mp[cnt-n-1];
        else return head->next;
        current->next=current->next->next;
    
        // cout<<" ** "<<alcur->val<<endl;
        // prev->next=current->next;
        return head;
    }
};