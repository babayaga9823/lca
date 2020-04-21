class Solution {
public:
     vector<int> inorderTraversal(TreeNode* root) {
        TreeNode *current=root;
        vector<int>v,l,r;
        if(current==NULL)return v;
        if(current->left!=NULL)
        {
            l=inorderTraversal(current->left);
        }
        l.push_back(current->val);
        // cout<<"** "<<current->val<<endl;
        if(current->right!=NULL)
        {
            r=inorderTraversal(current->right);
             // return r;
        }
        for(int i=0;i<r.size();i++)l.push_back(r[i]);
        return l;
    }
    bool isValidBST(TreeNode* root) {
        if(root!=NULL)
        {
            vector<int>v,alres=inorderTraversal(root);
            int cnt=0;
            for(int i=1;i<alres.size();i++)
            {
                if(alres[i-1]>=alres[i])cnt++;
            }
            if(cnt)return false;
    
        }
         return true;
    }
};