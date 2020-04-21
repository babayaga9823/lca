/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
        Node* connect(Node* root) {
         queue<Node*> q1,q2;
                q1.push(root);
                if(root==NULL)return NULL;
                while(!q1.empty())
                {
                    Node* current;
                    q2=q1;
                    while(!q1.empty())q1.pop();
                    while(!q2.empty())
                    {
                       current=q2.front();
                        q2.pop();
                        if(!q2.empty())
                        {
                            current->next=q2.front();
                        }
                        else
                        {
                            current->next=NULL;
                        }
                        if(current->left!=NULL)q1.push(current->left);   
                        if(current->right!=NULL)q1.push(current->right);
                    }
                }

                return root;
    }
};