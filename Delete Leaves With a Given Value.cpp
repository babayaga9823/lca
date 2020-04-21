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
    TreeNode *prev;
    void inorder(TreeNode* root, int target)
    {
        if(root==NULL)return ;
        
        if(root->left==NULL&root->right==NULL)
        {
            if(root->val==target)
            {
                if(prev->left!=NULL)
                {
                    if(prev->left->val==target&&prev->left->left==NULL&&prev->left->right==NULL)
                    {
                        prev->left=NULL;
                        // cout<<" 1st left delete prev "<<prev->val<<endl;
                    }
                }
                if(prev->right!=NULL)
                {
                    if(prev->right->val==target&&prev->right->left==NULL&&prev->right->right==NULL)
                    {
                        prev->right=NULL;
                         // cout<<" 1st right delete prev "<<prev->val<<endl;
                    }
                }
                
                return ;
            }
        }
        
        if(root->left!=NULL)
        {
            prev=root;
            // cout<<"called left"<<endl;
            inorder(root->left,target);
        }
        
        if(root->left!=NULL)
        {
            if(root->left->left==NULL&&root->left->right==NULL&&root->left->val==target)
            {
                root->left=NULL;
                // cout<<" 2 delete root "<<root->val<<endl;
            }
             
        }
        
         if(root->right!=NULL)
        {
             prev=root;
             // cout<<"called right"<<endl;
            inorder(root->right,target);
        }
         if(root->right!=NULL)
        {
            if(root->right->left==NULL&&root->right->right==NULL&&root->right->val==target){
                root->right=NULL;
                // cout<<" 3 delete root "<<root->val<<endl;
            }
             
        }
    }
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root==NULL)return NULL;
        prev=root;
        inorder(root,target);
        if(root!=NULL)if(root->left==NULL&&root->right==NULL&&root->val==target)return NULL;
        return root;
    }
};