
class Solution {
public:
    bool solve(TreeNode * a , TreeNode* b ){
        if(a == NULL && b == NULL)
            return true;
        
        if(a == NULL || b == NULL )
            return false;

        if(a->val != b->val)
            return false;
        
        return solve(a->left,b->right) &&
            solve(a->right,b->left);


    }
    bool isSymmetric(TreeNode* root) {
         return solve(root->left,root->right);

        
    }
};