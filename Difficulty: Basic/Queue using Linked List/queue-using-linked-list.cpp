class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {

  public:
   queue<int>q;
    myQueue() {
        // Initialize your data members
    }

    bool isEmpty() {
        // check if the queue is empty
        return q.empty();
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        q.push(x);
    }

    void dequeue() {
        // Removes the front element of the queue
        if(!q.empty()){
            q.pop();
        }
    }
    

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(q.empty()){
            return -1;
            
        }
        return q.front();
    }

    int size() {
        // Returns the current size of the queue.
        return q.size();
    }
};
