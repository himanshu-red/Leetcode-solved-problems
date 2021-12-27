
class Solution {
public:
    ListNode* reverseList(ListNode *left, ListNode *right)
    {
        ListNode *temp1 = left; 
        ListNode *temp2 = left; 
        ListNode *temp3 = left->next; 
        temp1->next = nullptr; 
        while (temp3 != nullptr && temp3 != right)
        {
            temp2 = temp3; 
            temp3 = temp3->next; 
            temp2->next = temp1; 
            temp1 = temp2; 
        }
        return temp2; 
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
            return head; 
        
        int countL = 1; 
        int countR = left; 
        ListNode *tempL = head; 
        ListNode *prevL = nullptr;
        
        while (countL < left)
        {
            countL++;
            prevL = tempL; 
            tempL = tempL -> next; 
            
        }
        
        ListNode *tempR = tempL; 
        
        while (countR < right)
        {
            countR++; 
            tempR = tempR -> next; 
        }
        
        if (tempR->next != nullptr)
            tempR = tempR->next; 
        
        else 
            tempR = nullptr; 
        
        ListNode *reversedHead = reverseList(tempL, tempR); 
        
        ListNode *temp = reversedHead; 
        
        if (tempR != nullptr)
        {
            while (temp->next != nullptr)
                temp = temp->next;

            temp->next = tempR;
        }
        
        
        if (left == 1)
            head = reversedHead; 
        else 
            prevL->next = reversedHead; 
        
        return head; 
        
    }
};
