class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
      if(root == nullptr){
        return nullptr;
      }
      root->left = trimBST(root->left,low,high);
      root->right = trimBST(root->right,low,high);

      if(root->val < low){
        return root->right;
      }
      if(root->val>high){
        return root->left;
      }
      return root;
    }
};