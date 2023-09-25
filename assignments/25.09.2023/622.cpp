class MyCircularQueue {
public:
    vector<int> q;
    int size, rear, front;
    
    MyCircularQueue(int k) {
        size = k;
        q.resize(k, -1);
        rear = -1;
        front = -1;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;

        if(rear == -1 && front == -1) {
            rear = 0;
            front = 0;
        }else {
            rear = (rear + 1) % size;
        }

        q[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        q[front] = -1;
        front = (front + 1) % size;
        if(front == (rear + 1) % size) {
            front = -1;
            rear = -1;
        }
        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : q[front];
    }
    
    int Rear() {
        return isEmpty() ? -1 : q[rear];
    }
    
    bool isEmpty() {
        return rear == -1 && front == -1;
    }
    
    bool isFull() {
        return front == (rear + 1) % size;
    }
};