class MyQueue {
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyQueue() {
        size = 101;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    
    void push(int x) {
        if(rear == size){
            cout << "Stack is full";
        }
        else{
            arr[rear] = x;
            rear++;
        }
    }
    
    int pop() {
        int ans;
        if(front == rear){
            return -1;
        }
        else{
            ans = arr[front];
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
        return ans;

    }
    
    int peek() {
        if(front == rear){
            return -1;
        }

        return arr[front];
    }
    
    bool empty() {
        return front == rear;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */