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
    vector<vector<int>>vt;
    int add=0;
    int counter=0;
    void inorder(TreeNode* root,vector<int>v)
    {
       if(root==NULL)return;
       
        v.push_back(root->val);
        int tot=accumulate(v.begin(),v.end(),0);
        if(tot==add) counter++;
        // cout<<" Pushed value "<<root->val<<" tot "<<tot<<endl;
        for(int i=0;i<v.size()-1;i++)
        {
            if(tot-v[i]==add)
            {
                // cout<<"here"<<endl;
                // cout<<" ++ "<<i<<endl;
                // vector<int>temp(v.begin()+i+1,v.end());
                // if(temp.size()>0)vt.push_back(temp);
                counter++;
                 tot-=v[i];
            }
            else tot-=v[i];
        }
      
       if(root->left!=NULL)
       {
           inorder(root->left,v);
       }
       if(root->right!=NULL)
       {
           inorder(root->right,v); 
       }

    }
    int pathSum(TreeNode* root, int sum) {
        vector<vector<int>>v;
        vector<int>rv;
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL)return root->val==sum?true:false;
        add=sum;
        inorder(root,rv);
         int z=counter;
        // for(auto it:vt)
        // {
        //     for(auto ot:it)cout<<ot<<" ";
        //     cout<<endl;
        // }
        add=0;
        counter=0;
        vt.clear();
        return z;
    }
};