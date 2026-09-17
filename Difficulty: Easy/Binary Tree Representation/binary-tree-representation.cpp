/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    Node* buildTree(vector<int>& nodes) {
        // code here
        return BT(nodes,0);
        
    }
    Node* BT(vector<int>&nodes,int i){
        if(i>=nodes.size()){
            return nullptr;
            
        }
        Node* root = new Node(nodes[i]);
        root->left = BT(nodes,2*i+1);
        root->right = BT(nodes,2*i+2);
        return root;
    }
};