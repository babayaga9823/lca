/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<double>av;
void level(TreeNode* root)
{
    if(root==NULL)return ;
    TreeNode *current=root;
    queue<TreeNode*>q1,q2;
    q1.push(root);
    while(!q1.empty())
    {
        double tot=0,cnt=0;
        while(!q1.empty())
        {
             current=q1.front();
            tot+=current->val;
            cnt++;
            q1.pop();
            if(current->left!=NULL)q2.push(current->left);
           if(current->right!=NULL)q2.push(current->right);
            
        }
        q1=q2;
        double z=tot/cnt;
        // cout<<"  z "<<z<<endl;
        av.push_back(z);
       while(!q2.empty())q2.pop();
    }
}
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
         if(root==NULL)return v;
             level(root);
        v=av;
        av.clear();
        return v;
        
    }
};