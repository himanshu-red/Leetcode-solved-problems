class browser
{
    public:
        string link; 
        browser *next; 
        browser *prev ; 
        browser(string str)
        {
            link = str; 
            next = prev = nullptr; 
        }   
};

class BrowserHistory {
public:
    browser *top = nullptr; 
    
    BrowserHistory(string homepage) {
        browser *newTab  = new browser (homepage); 
        top = newTab; 
    }
    
    void visit(string url) {
        
        browser *newTab = new browser (url);
        
        
        top->next = newTab; 
        newTab->prev = top; 
        top = top -> next; 
        
    }
    
    string back(int steps) {
        int i = 0; 
        while (i != steps && top->prev != nullptr)
        {
            i++; 
            top = top->prev; 
        }
        return top->link; 
    }
    
    string forward(int steps) {
        int i = 0; 
        while (i != steps && top -> next != nullptr )
        {
            i++; 
            top = top->next; 
        }
        return top->link; 
    }
};
