Solution 1-->
  
class Solution {
public:
    bool valid(TreeNode * root,long low,long high)
    {
        if(root==NULL)
            return true;
        if((root->val<high) && (root->val>low))
            return (valid(root->left,low,root->val) && valid(root->right,root->val,high));
        else
            return false;
    }
    bool isValidBST(TreeNode* root) {
        bool ans=valid(root,LONG_MIN,LONG_MAX);
        return ans;
    }
};
