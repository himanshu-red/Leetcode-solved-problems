
class Solution {
public:
    ListNode * reverse(ListNode *l)
    {
        ListNode *temp1 = l; 
        ListNode *temp2 = l; 
        ListNode *temp3 = l->next; 
        
        temp1->next = nullptr; 
        
        while (temp3 != nullptr)
        {
            temp2 = temp3; 
            temp3 = temp3->next; 
            temp2->next = temp1; 
            temp1 = temp2; 
        }
        return temp2; 
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *r1 = reverse(l1); 
        ListNode *r2 = reverse(l2); 
        
        ListNode *headSum = nullptr; 
        ListNode *tempSum = nullptr; 
        
        ListNode *temp1 = r1; 
        ListNode *temp2 = r2; 
        
        int carry = 0; 
        
        while (temp1 != nullptr && temp2 != nullptr)
        {
            int sum = temp1->val + temp2->val + carry; 
            carry = sum / 10; 
            sum  = sum % 10; 
            
            ListNode *newNode = new ListNode (sum); 
            
            if (headSum == nullptr)
            {
                headSum = newNode; 
                tempSum = headSum; 
            }
            
            else
            {
                tempSum->next = newNode; 
                tempSum = newNode; 
            }
            
            temp1 = temp1 -> next; 
            temp2 = temp2 -> next; 
        }
        
        ListNode *rest = (temp1 != nullptr) ? (temp1) : (temp2);  
        
        while (rest != nullptr)
        {
            int sum = rest->val + carry; 
            carry = sum / 10; 
            sum  = sum % 10; 
            ListNode *newNode  = new ListNode (sum); 
            tempSum -> next = newNode; 
            tempSum = newNode; 
            rest = rest->next; 
        }
        
        if (carry)
        {
            ListNode *newNode = new ListNode (carry); 
            tempSum->next = newNode; 
            tempSum = tempSum->next; 
        }
        
        headSum = reverse(headSum); 
        
        return headSum; 
    }
};
