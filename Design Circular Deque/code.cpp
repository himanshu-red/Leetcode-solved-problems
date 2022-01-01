class Dq
{
    public:
        int val; 
        Dq *next; 
        Dq *prev; 
    Dq (int x)
    {
        val = x; 
        next = prev = nullptr; 
    }
}; 
class MyCircularDeque {
public:
    int size; 
    int currSize = 0; 
    Dq *front = nullptr; 
    Dq *rear = nullptr; 
    
    MyCircularDeque(int k) {
        size = k; 
    }
    
    bool insertFront(int value) {
        Dq *node = new Dq (value); 
        bool inserted = false; 
        if (currSize < size)
        {
            if (!(front))
            {
                front = node; 
                rear = node;
            }
            else 
            {
                node->next = front; 
                front->prev = node; 
                front = front->prev; 
            }
            inserted = true; 
            currSize++; 
        }
        return inserted; 
    }
    
    bool insertLast(int value) {
        Dq *node = new Dq (value); 
        bool inserted = false; 
        if (currSize < size)
        {
            if (!(rear))
            {
                front = node; 
                rear = node; 
            }
            else 
            {
                rear->next = node; 
                node->prev = rear; 
                rear= rear->next; 
            }
            inserted = true; 
            currSize++;
        }
        return inserted; 
    }
    
    bool deleteFront() {
        bool deleted = false;
        if (currSize)
        {
            if (currSize == 1)
            {
                front = nullptr; 
                rear = nullptr; 
            }
            else
            {
                front = front->next; 
                front->prev = nullptr; 
            }
            deleted = true; 
            currSize--; 
        }
        return deleted; 
    }
    
    bool deleteLast() {
        bool deleted = false; 
        if (currSize)
        {
            if (currSize == 1)
            {
                rear = nullptr; 
                front = nullptr; 
            }
            else 
            {
                rear = rear->prev; 
                rear->next = nullptr; 
            }
            deleted = true; 
            currSize--; 
        }
        return deleted; 
    }
    
    int getFront() {
        int val;
        if (front)
            val = front->val; 
        else
            val = -1;
        return val;
    }
    
    int getRear() {
        int val; 
        if (rear)
            val =  rear->val; 
        else
            val = -1;
        return val; 
    }
    
    bool isEmpty() {
        bool isEmp = true; 
        if (currSize)
            isEmp = false; 
        return isEmp; 
            
    }
    
    bool isFull() {
        bool isFul = true;
        if (!(currSize == size))
            isFul = false; 
        return isFul; 
    }
};
