
class Solution {
public:
    ListNode *getNode(ListNode *head)
    {
        int val = head->val; 
        ListNode *temp; 
        while (temp != nullptr && val == temp->val)
        {
            temp = temp->next; 
        }
        return temp; 
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        while ((head != nullptr && head->next != nullptr) && (head->val == head->next->val))
           { 
                head = getNode(head);
                if (head == nullptr)
                    return head; 
           }
        if (head->next != nullptr)
        {
            ListNode *temp1 = head; 
            ListNode *temp2 = head->next;
            while (temp1->next != nullptr && temp2->next != nullptr)
            {
                while ((temp2 != nullptr && temp2->next != nullptr) && (temp2->val == temp2->next->val))
                { 
                    temp2 = getNode(temp2);
                }
                if (temp2 == nullptr)
                { 
                    temp1->next = nullptr; 
                }
                else 
                {
                    temp1->next = temp2; 
                    temp1 = temp1->next; 
                    temp2 = temp2->next; 
                }
            }
        }
        return head; 
        
    }
};
