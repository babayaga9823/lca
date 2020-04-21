/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* current=head,*header=NULL,*incur=NULL;
        queue<int>q;
        if(head==NULL)return NULL;
        while(current!=NULL)
        {
            if(header==NULL)
            {
                Node *cur=new Node(current->val);
                header=cur;
                incur=header;
                //index search start
                Node* search=head;
                int cnt=0;
                if(current->random!=NULL)
                {
                    while(search!=current->random)
                    {
                        search=search->next;
                        cnt++;
                    }
                    q.push(cnt);
                }
                else
                {
                    q.push(-99);
                }
                //index search end
                current=current->next;
            }
            else
            {
                Node *cur=new Node(current->val);
                incur->next=cur;
                incur=cur;
                //index search start
                  Node* search=head;
                int cnt=0;
                if(current->random!=NULL)
                {
                    while(search!=current->random)
                    {
                        search=search->next;
                        cnt++;
                    }
                    q.push(cnt);
                }
                else
                {
                    q.push(-99);
                }
                
                //index search end
                current=current->next;
            }
        }
        
        
        //linking random links
        current=header;
        while(current!=NULL)
        {
            int z=q.front();
            q.pop();
            if(z==-99)current->random=NULL;
            else
            {
                incur=header;
                while(z--)
                {
                    incur=incur->next;
                }
                current->random=incur;
            }
            current=current->next;
        }
        return header;
    }
};