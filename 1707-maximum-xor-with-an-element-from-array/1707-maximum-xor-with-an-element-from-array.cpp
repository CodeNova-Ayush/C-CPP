class Solution {
public:

    struct Node {
        Node* child[2];

        Node() {
            child[0] = nullptr;
            child[1] = nullptr;
        }
    };

    Node* root = new Node();

    void insert(int num) {
        Node* curr = root;

        for (int bit = 30; bit >= 0; bit--) {
            int b = (num >> bit) & 1;

            if (curr->child[b] == nullptr) {
                curr->child[b] = new Node();
            }

            curr = curr->child[b];
        }
    }

    int getMaxXOR(int x) {
        Node* curr = root;
        int ans = 0;

        for (int bit = 30; bit >= 0; bit--) {
            int b = (x >> bit) & 1;
            int opposite = 1 - b;

            if (curr->child[opposite] != nullptr) {
                ans |= (1 << bit);
                curr = curr->child[opposite];
            }
            else {
                curr = curr->child[b];
            }
        }

        return ans;
    }

    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {

        sort(nums.begin(), nums.end());

        vector<array<int, 3>> q;

        for (int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i][1], queries[i][0], i});
        }

        sort(q.begin(), q.end());

        vector<int> answer(queries.size(), -1);

        int j = 0;

        for (auto& query : q) {

            int m = query[0];
            int x = query[1];
            int index = query[2];

            while (j < nums.size() && nums[j] <= m) {
                insert(nums[j]);
                j++;
            }

            if (j > 0) {
                answer[index] = getMaxXOR(x);
            }
        }

        return answer;
    }
};