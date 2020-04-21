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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||k==0)return head;
        int lop=1,flag=0,cnt=0;
         ListNode* current=head;
        while(current!=NULL)
        {
            current=current->next;
            cnt++;
        }
        for(int i=0;i<k%cnt;i++)
        {
            current=head;
            int si=0,z=0,prevz=head->val,curz=0,nexz=0;
            while(current!=NULL)
            {
                curz=current->val;
                current->val=prevz;
                prevz=curz;
                current=current->next;
               
            }
            head->val=prevz;
            
        }
        return head;
    }
};