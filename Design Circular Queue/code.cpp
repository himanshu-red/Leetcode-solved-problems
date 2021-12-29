class Node 
{
    public:
        int val; 
        Node *next; 
        Node (int x)
        {
            val = x; 
            next = nullptr; 
        }
};
class MyCircularQueue {
public:
    int size; 
    int currSize; 
    Node *head ; 
    Node *tail;
    MyCircularQueue(int k) {
        size = k; 
        currSize = 0; 
        head = nullptr; 
        tail = nullptr; 
    }
    
    bool enQueue(int value) {
        bool enQueued = false; 
        if (size > currSize)
        {
            Node *newNode  = new Node (value); 
            if (head == nullptr && tail == nullptr)
            {
                head = newNode; 
                tail = newNode; 
                tail->next = head; 
            }
            else 
            {
                tail->next = newNode; 
                tail = newNode; 
                tail->next = head; 
            }
            enQueued = true; 
            currSize++; 
        }
        return enQueued; 
    }
    
    bool deQueue() {
        bool deQueued = false; 
        if (currSize != 0)
        {
            if (head == tail)
            {
                head = nullptr; 
                tail = nullptr; 
            }
            else 
            {
                head = head->next; 
            }
            currSize--; 
            deQueued = true; 
        }
        return deQueued; 
    }
    
    int Front() {
        int front; 
        if (head)
            front = head->val; 
        else 
            front = -1; 
        return front; 
            
    }
    
    int Rear() {
        int rear; 
        if (tail)
            rear = tail -> val; 
        else 
            rear = -1; 
        return rear; 
    }
    
    bool isEmpty() {
        int res = false; 
        if (currSize == 0)
            res = true; 
        return res; 
            
    }
    
    bool isFull() {
        bool res = false; 
        if (size == currSize)
            res = true; 
        return res; 
    }
};
