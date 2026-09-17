class Solution {
public:
    string firstNonRepeating(string s) {
        queue<char> q;
        int freq[26] = {0};
        string ans = "";

        for(char ch : s) {
            freq[ch - 'a']++;
            q.push(ch);

            while(!q.empty() && freq[q.front() - 'a'] > 1) {
                q.pop();
            }

            if(q.empty()) {
                ans += '#';
            }
            else {
                ans += q.front();
            }
        }

        return ans;
    }
};