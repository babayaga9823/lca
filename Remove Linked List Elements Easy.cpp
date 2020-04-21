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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current=head,*prev=head;
        if(head==NULL)return head;
        while(current!=NULL)
        {
           if(head->val==val)
           {
               head=head->next;
               current=head;
               prev=current;
           }
        else
           {
            int flag=0;
              if(current->val==val)
              {
                  prev->next=current->next;
                  current=current->next;
                  flag++;
              }
            if(flag==0)
            {
                prev=current;
            current=current->next;
            }
           }
        }
        return head;
    }
};




//  int fond=0;
//             if(current->val==val)
//             {
//                 fond++;
//             }
//             prev=current;
//             current=current->next;
//             if(current!=NULL&&val)prev->next=current;