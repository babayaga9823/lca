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
    vector<string>v;
    string convert(int z)
    {
        char a[1000000]={0};
        int acnt=0,flag=0;
            if(z<0)
            {
                z=(-1)*z;
                a[acnt++]='-';
                flag++;
            }
            while(z!=0)
            {
                a[acnt++]=(z%10)+48;
                z/=10;
            }
            a[acnt]='\0';
            string t=a;
            if(flag)reverse(t.begin()+1,t.end());
            else reverse(t.begin(),t.end());
        return t;
    }
    
    
    void inorder(TreeNode* root,string s)
    {
        s=s+"->"+convert(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            string r;
            char a[1000000]={0};
            int acnt=0;
            for(int i=2;i<s.length();i++)
            {
               a[acnt++]=s[i]; 
            }
            a[acnt]='\0';
            r=a;
            v.push_back(r);
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
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>rv;
        if(root==NULL)return rv;
        inorder(root,"");
        rv=v;
        v.clear();
        return rv;
    }
};