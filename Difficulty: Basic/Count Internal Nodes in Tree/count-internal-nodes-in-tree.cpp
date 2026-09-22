/* Binary Tree Node Structure
class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
        
        if(root == nullptr){
            return 0;
        }
        if(root -> left == nullptr && root->right == nullptr ){
            return 0;
        }
        return 1+
            + countNonLeafNodes(root->left)
            + countNonLeafNodes(root->right);
    }
};