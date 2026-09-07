/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int getSize(Node* root) {
        if(root == nullptr){
            return 0;
        }
        // code here
        int l = getSize(root->left);
        int r = getSize(root->right);
        return l + r + 1;
    }
};