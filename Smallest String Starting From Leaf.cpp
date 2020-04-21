/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
set<string>st;
void inorder(TreeNode* root,string s)
{
   if(root==NULL)return;
    char c[2];
    c[0]=root->val+97;
    c[1]='\0';
    string temp=c;
    s+=temp;
    if(root->left==NULL&&root->right==NULL)
    {
        reverse(s.begin(),s.end());
        st.insert(s);
    }
   if(root->left!=NULL)
   {
       inorder(root->left,s);
   }
   if(root->right!=NULL)
   {
       inorder(root->right,s); 
   }
    
}
class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        string s="";
        if(root==NULL)return s;
        inorder(root,s);
        s+=*(st.begin());
        st.clear();
        return s;
    }
};