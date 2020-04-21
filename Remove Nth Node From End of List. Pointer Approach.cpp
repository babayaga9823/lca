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
        
        ListNode *current=head,*mainnode=head,*prev=head;
         if(head==NULL)return NULL;
        if(head->next==NULL)return  NULL;
        int cnt=1;
        while(cnt<n&&current!=NULL)
        {
            current=current->next;
            cnt++;
        }
        if(current->next==NULL)
        {
            return head->next;
        }
        if(current!=NULL)
        {
            // cout<<"Herr"<<endl;
            while(current->next!=NULL)
            {
                prev=mainnode;
                mainnode=mainnode->next;
                current=current->next;
            }
        }
      if(prev->next!=NULL)prev->next=prev->next->next;
        return head;
    }
};


// [1,2,3,4,5]
// 2
// []
// 0
// [1,2]
// 1
// [1,2]
// 2