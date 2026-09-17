class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k>q.size()){
            return q;
        }
        stack<int> st;
        for(int i = 0; i<k ; i++){
             st.push(q.front());
             q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            
        }
        int n = q.size()-k;
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
            
        }
        return q;
    }
};