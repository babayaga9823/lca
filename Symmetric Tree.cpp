/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        if(root->left==NULL&&root->right==NULL)return true;
         if(root->left==NULL||root->right==NULL)return false;
        queue<TreeNode*>ql,qr;
        ql.push(root->left);
        qr.push(root->right);
        while(!ql.empty()&&!qr.empty())
        {
                TreeNode* l=ql.front();
                ql.pop();
                TreeNode* r=qr.front();
                qr.pop();
                // if(l->val==NULL&&r->val!=NULL)return false;
                // if(l->val!=NULL&&r->val==NULL)return false;
                // cout<<" ++ "<<l->val<<" "<<r->val<<endl;
            
               if(l->val!=r->val)
                {
                    // cout<<" 1 if"<<endl;
                    return false;
                }
                else if(l->left!=NULL&&r->right==NULL)
                {
                   // cout<<" 2 if"<<endl;
                    return false;
                }
                else if(l->left==NULL&&r->right!=NULL)
                {
                    // cout<<" 3 if"<<endl;
                    return false;
                }
                else if(l->right!=NULL&&r->left==NULL)
                {
                   // cout<<" 3 if"<<endl;
                    return false;
                }
                else if(l->right==NULL&&r->left!=NULL)
                {
                    // cout<<" 4 if"<<endl;
                    return false;
                }
                 if(l->left!=NULL&&r->right!=NULL)
                {
                    // cout<<" ++1 if "<<l->left->val<<" "<<r->right->val<<endl;
                     ql.push(l->left);
                     qr.push(r->right); 
                }
                 if(l->right!=NULL&&r->left!=NULL)
                {
                    ql.push(l->right);
                    // cout<<" ++2 if "<<l->right->val<<" "<<r->left->val<<endl;
                    qr.push(r->left);
                }  
               
             
            
        }
        if(ql.empty()&&qr.empty())return true;
        return false;
    }
};

// [1,2,2,3,4,4,3]
// [1,2,2,null,3,null,3]


// [1,2,2,3,4,4,3]
// [1,2,2,null,3,null,3]
// [2,3,3,4,5,null,4]


// [1,2,2,null,3,null,3]
// [2,3,3,4,5,null,4]
// [2,3,3,4,5,null,4]