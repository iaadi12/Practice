class Solution {
public:
    vector<int>ans;//Because funtion call itself many times so it return only one valur if ve define it indside function
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return ans;
    }
};
