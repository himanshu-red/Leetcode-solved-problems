class Node
{
    public:
        int x; 
        Node *next; 
    
        Node (int x)
        {
            this->x = x; 
            this->next = nullptr; 
        }
};
class MyLinkedList {
public:
    Node *head = nullptr; 
    Node *tail = nullptr; 
    int totalNodes = 0; 
    MyLinkedList() {
    }
    
    int get(int index) {
        int val; 
        if (index >= totalNodes)
        {
            val = -1; 
        }
        else if (index == totalNodes-1)
        {
             val =  tail->x; 
        }
        else
        {
            int count = 0; 
            Node *temp = head; 
            while (count < index)
            {
                count++; 
                temp = temp->next; 
            }
            val= temp->x; 
        }
        return val ;
    }
    
    void addAtHead(int val) {
        Node *newNode = new Node (val); 
        if (head == nullptr)
        {
            head = newNode; 
            tail = newNode; 
        }
        else 
        {
            newNode->next = head; 
            head = newNode; 
        }
        totalNodes ++; 
    }
    
    void addAtTail(int val) {
        Node *newNode = new Node (val); 
        if (tail == nullptr)
        {
            head = newNode; 
            tail = newNode; 
        }
        else
        {
            tail->next = newNode; 
            tail = newNode; 
        }
        totalNodes++; 
    }
    
    void addAtIndex(int index, int val) {
        if (index <= totalNodes)
        {
            Node *newNode = new Node (val); 
            // cout << index << " " << totalNodes << endl; 
            if (index == 0)
            {
                if (head == nullptr)
                {
                    head = newNode; 
                    tail = newNode; 
                }
                else 
                {
                    newNode ->next = head; 
                    head = newNode; 
                }
            }
            if (index == totalNodes)
            {
                tail->next = newNode; 
                tail = newNode; 
            }
            else
            {
                int count = 0; 
                Node *temp = head; 
                while (count < index-1)
                {
                    temp = temp->next; 
                    count++; 
                }
                newNode ->next = temp->next; 
                temp->next = newNode;
            }
            totalNodes++; 
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < totalNodes)
        {
            if (index == 0)
            {
                if (head->next != nullptr)
                {
                    head = head->next; 
                }
                else
                {
                    head = nullptr;
                    tail = nullptr; 
                }
            }
            else
            {
                int count = 0; 
                Node *temp = head; 
                while (count < index-1)
                {
                    count++; 
                    temp = temp->next; 
                }
                if (temp->next->next != nullptr)
                {
                    temp->next = temp->next->next; 
                }
                else 
                {
                    temp->next = nullptr; 
                    tail = temp; 
                }
            }
            totalNodes--;
        }
    }
};
