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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*>st;
        if(head==NULL)return NULL;
        ListNode *current=head,*alsi=NULL;
        while(current!=NULL)
        {
            if(st.find(current)==st.end())st.insert(current);
            else 
            {
               alsi=current;
                break;
            }
            current=current->next;
        }
        return alsi;
    }
};