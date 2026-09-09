class Solution {
public:

    struct Node {
        Node* child[2];
        int cnt;

        Node() {
            child[0] = child[1] = NULL;
            cnt = 0;
        }
    };

    Node* root = new Node();

    void insert(int num) {
        Node* curr = root;

        for(int i = 14; i >= 0; i--) {
            int bit = (num >> i) & 1;

            if(curr->child[bit] == NULL)
                curr->child[bit] = new Node();

            curr = curr->child[bit];
            curr->cnt++;
        }
    }

    int countLessEqual(int num, int limit) {

        Node* curr = root;
        int ans = 0;

        for(int i = 14; i >= 0; i--) {

            if(curr == NULL)
                break;

            int a = (num >> i) & 1;
            int b = (limit >> i) & 1;

            if(b == 1) {
                // XOR bit = 0 is definitely smaller
                if(curr->child[a])
                    ans += curr->child[a]->cnt;

                // Continue with XOR bit = 1
                curr = curr->child[1 - a];
            }
            else {
                // XOR must be 0
                curr = curr->child[a];
            }
        }

        if(curr)
            ans += curr->cnt;

        return ans;
    }

    int countPairs(vector<int>& nums, int low, int high) {

        int ans = 0;

        for(int x : nums) {
            ans += countLessEqual(x, high);
            ans -= countLessEqual(x, low - 1);

            insert(x);
        }

        return ans;
    }
};