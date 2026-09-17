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
        Node* rear ;
        Node* front;
        int count ;
    myQueue() {
        // Initialize your data members
        front = nullptr;
        rear = nullptr;
        count = 0;
        
    }

    bool isEmpty() {
        return front == nullptr;
        // check if the queue is empty
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node* temp = new Node(x);
        if(front == nullptr){
            front = temp;
            rear = temp;
        }else{
            rear->next = temp;
            rear = temp ;
        }count++;
    }

    void dequeue() {
        // Removes the front element of the queue
        if(front == nullptr){
            return;
        }
        Node * temp = front;
        front = front->next;
        delete temp;
        count --;
        if(front == nullptr){
            rear = nullptr;
        }
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(front == nullptr){
            return -1;
        }
        return front->data;
    }

    int size() {
        // Returns the current size of the queue.
        return count;
    }
};
