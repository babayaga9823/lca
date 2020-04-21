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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode *newly=new TreeNode(val);
            return newly;
        }
        TreeNode *current=root;
        
        while(current!=NULL)
        {
           // if(current->val==val)return current;  
          if(current->val>val)
            {
                    if(current->left!=NULL)current=current->left;
                    else if(current->left==NULL)
                    {
                        TreeNode *newly=new TreeNode(val);
                        current->left=newly;
                        break;
                    }
            }
            else if(current->val<val)
            {
                    if(current->right!=NULL)current=current->right;
                    else if(current->right==NULL)
                    {
                        TreeNode *newly=new TreeNode(val);
                        current->right=newly;
                        break;
                    }
            }
        }
        return root;
    }
};