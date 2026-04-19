class MyCircularQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    
    bool enQueue(int value) {
        if((rear + 1) % size == front){
            return false;
        }

        if(front == -1){
            front = 0;
            rear = 0;
        }
        else{
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
            return true;
    }
    
    bool deQueue() {
        if(front == -1){
            return false;
        }
        // int value = arr[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front + 1) % size;
        }

        return true;


    }
    
    int Front() {
        if(front == -1){
            return - 1;
        }

        return arr[front];
    }
    
    int Rear() {
        if(rear == -1){
            return -1;
        }

        return arr[rear];
    }
    
    bool isEmpty() {
        if(front == -1){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if((rear + 1) % size == front){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */