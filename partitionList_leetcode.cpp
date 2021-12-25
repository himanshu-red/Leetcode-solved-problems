class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        if (head == nullptr)
            return head; 
        if (x > 100 || x < -100)
            return head; 
        
        ListNode *smaller = nullptr; 
        ListNode *larger = nullptr; 
        ListNode *temp1 = head; 
        ListNode *temp; 
        ListNode *tLarge; 
        ListNode *tSmall; 
        
        while (temp1 != nullptr)
        {
            temp = temp1; 
            temp1 = temp1->next; 
            if (temp->val < x)
            {
                if (smaller == nullptr)
                {
                    smaller = temp; 
                    tSmall = temp; 
                    tSmall->next = nullptr; 
                }
                else 
                {
                    tSmall->next = temp; 
                    tSmall = tSmall->next; 
                    tSmall->next = nullptr; 
                    
                }
            }
            else if (temp->val >= x)
            {
                if (larger == nullptr)
                {
                    larger = temp; 
                    tLarge = temp; 
                    tLarge->next = nullptr; 
                }
                else 
                {
                    tLarge->next = temp; 
                    tLarge = tLarge->next; 
                    tLarge->next = nullptr; 
                }
            }
        }
        if (smaller == nullptr)
        {
            head = larger; 
        }
        else 
        {
            tSmall->next = larger; 
            head = smaller; 
        }
        return head; 
        
    }
};