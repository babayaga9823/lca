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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode *current=head;
        int cnt=0;
        while(current!=NULL)
        {
            cnt++;
            current=current->next;
        }
        cnt=cnt/2;
        cnt++;
        int tot=0;
        current=head;
         while(current!=NULL)
        {
            tot++;
             if(tot==cnt)return current;
            current=current->next;
        }
        return current;
    }
};