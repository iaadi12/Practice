Solution 1-->
  
  class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        
        if(root->val == targetSum && !root->left && !root->right){
            return true;
        }
        
        return hasPathSum(root->left,targetSum-root->val) 
            ||
            hasPathSum(root->right,targetSum-root->val);
    }
};


Solution 2-->
  class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return helpSum(root,targetSum,0); 
    }
    bool helpSum(TreeNode* root, int target, int sum)
    {
        if(!root)return false;
        if(root->left == NULL && root->right == NULL)
            return (sum + root->val==target);
        
        else
            return helpSum(root->left, target, sum+root->val)
            ||
         helpSum(root->right, target, sum+root->val);
    }
};
