
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head; 
        ListNode *odd = nullptr; 
        ListNode *even = nullptr; 
        ListNode *tOdd; 
        ListNode *tEven; 
        ListNode *temp1 = head; 
        ListNode *temp2;
        int count = 1; 
        
        while (temp1 != nullptr)
        {
            if (count % 2)
            {
                if (odd == nullptr)
                {
                    temp2 = temp1; 
                    temp1 = temp1->next; 
                    odd = temp2; 
                    tOdd = temp2;
                    odd->next = nullptr; 
                }
                else 
                {
                    temp2 = temp1; 
                    temp1 = temp1->next; 
                    tOdd->next = temp2; 
                    tOdd = tOdd->next; 
                    tOdd->next = nullptr; 
                }
                count++; 
            }
            else
            {
                if (even == nullptr)
                {
                    temp2 = temp1;   
                    temp1 = temp1->next;
                    even = temp2; 
                    tEven = temp2; 
                    even->next = nullptr; 
                }
                else 
                {
                    temp2 = temp1; 
                    temp1 = temp1->next; 
                    tEven->next = temp2; 
                    tEven = tEven->next; 
                    tEven->next = nullptr; 
                }
                count++; 
            }
        }
        tOdd -> next = even; 
        head = odd; 
        return head; 
        
    }
};
