class Node1 // normal stack
{
    public:
        int val; 
        Node1 *next; 
        Node1 *prev; 
    Node1 (int x)
    {
        val = x; 
        next = nullptr; 
        prev = nullptr; 
    }
}; 

class Node2  // min stack
{
     public:
        int val; 
        Node2 *next; 
        Node2 *prev; 
    Node2 (int x)
    {
        val = x; 
        next = nullptr; 
        prev = nullptr; 
    }
};

class MinStack {
public:
    Node1 *top1 =  nullptr; 
    Node2 *top2 =  nullptr; 
    
    MinStack() {

    }
    
    void push(int val) {
        Node1 *newNode1 = new Node1 (val); 
        
        if (top1 == nullptr)
        {
            top1 = newNode1; 
            
            Node2 *newNode2 = new Node2( val); 
            top2 = newNode2; 
        }
        
        else 
       { 
            top1->next = newNode1;
            newNode1->prev = top1; 
            top1 = top1->next; 
        }
            
            
        if (top2 != nullptr)
        {
            if (top2 -> val > val)
            {
                Node2 *newNode2 = new Node2( val); 
                top2->next = newNode2; 
                newNode2->prev = top2; 
                top2 = top2->next; 
            }
            else 
            {
                Node2 *topNode = new Node2 (top2->val); 
                top2->next = topNode;
                topNode->prev = top2; 
                top2= top2->next; 
            }
        }
        
    }
    
    void pop() {
        if (top1->prev != nullptr)
        {
            top2 = top2->prev; 
            top1 = top1->prev; 
        }
        
        else 
          {
            top1 = nullptr; 
            top2 = nullptr; 
          }
    }
    
    int top() {
        if (top1)
            return top1->val; 
        else 
            return -1; 
    }
    
    int getMin() {
        if (top2)
            return top2->val; 
        else
            return -1; 
    }   
};
