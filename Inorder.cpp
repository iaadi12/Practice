class Solution {
public:
    vector<int>ans;//Because funtion call itself many times so it return only one valur if ve define it indside function
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
        return ans;
    }
};
    
