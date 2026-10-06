class TrieNode {
public:
    TrieNode* children[10];

    TrieNode() {
        for (int i = 0; i < 10; i++) {
            children[i] = nullptr;
        }
    }
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        TrieNode* root = new TrieNode();

        for (int num : arr1) {
            string s = to_string(num);
            TrieNode* curr = root;

            for (char c : s) {
                int digit = c - '0';

                if (curr->children[digit] == nullptr) {
                    curr->children[digit] = new TrieNode();
                }

                curr = curr->children[digit];
            }
        }

        int ans = 0;

        for (int num : arr2) {
            string s = to_string(num);
            TrieNode* curr = root;
            int len = 0;

            for (char c : s) {
                int digit = c - '0';

                if (curr->children[digit] == nullptr) {
                    break;
                }

                curr = curr->children[digit];
                len++;
            }

            ans = max(ans, len);
        }

        return ans;
    }
};