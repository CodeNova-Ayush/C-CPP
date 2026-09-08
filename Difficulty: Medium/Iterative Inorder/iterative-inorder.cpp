class Solution {
  public:
    vector<int> inOrder(Node* root) {

        vector<int> ans;
        stack<Node*> st;
        Node* curr = root;

        while (curr != NULL || !st.empty()) {
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            ans.push_back(curr->data);
            curr = curr->right;
        }
        return ans;
    }
};