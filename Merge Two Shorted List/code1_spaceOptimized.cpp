
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr)
            return list2; 
        if (list2 == nullptr)
            return list1; 
        
        
        ListNode *temp1 = nullptr; 
        ListNode *head = (list1->val <= list2->val) ? (list1) : (list2); 
        ListNode *l1 = head; 
        ListNode *l2 = (head == list1) ? (list2) : (list1); 
        
        while (l1 != nullptr && l2 != nullptr)
        {
            while ((l1 && l2 ) && l1->val <= l2->val)
            {
                temp1 = l1; 
                l1 = l1->next; 
            }
            
            temp1->next = l2;
            
            ListNode *temp2 = l1; 
            l1 = l2; 
            l2 = temp2; 
        }
        return head; 
    }
};
