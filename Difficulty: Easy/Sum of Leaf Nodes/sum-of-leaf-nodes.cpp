class Solution {
  public:
    int leafSum(Node* root) {
        if (root == nullptr)
            return 0;
            
        if (root->left == nullptr && root->right == nullptr)
            return root->data;

        return leafSum(root->left) + leafSum(root->right) ;
    }
};