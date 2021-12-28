class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = nullptr; 
        ListNode *temp; 
        while (list1 != nullptr && list2 != nullptr)
        {
            
            ListNode *Node= new ListNode();
            if (head == nullptr)
            {
                head = Node; 
                temp = Node; 
            }
            else 
            {
                temp->next = Node; 
                temp = temp->next; 
            }
            if (list1->val < list2->val)
            {
                 Node->val = list1->val; 
                list1 = list1->next; 
            }
            else
            {
                Node->val = list2->val; 
                list2 = list2->next; 
            }
        }
        while (list1 != nullptr)
        {
            ListNode *Node= new ListNode();
            if (head == nullptr)
            {
                head = Node; 
                temp = Node; 
            }
            else 
            {
                temp->next = Node; 
                temp = temp->next; 
            }
             Node->val = list1->val; 
            list1 = list1->next;
        }
        while (list2 != nullptr)
        {
            ListNode *Node= new ListNode();
            if (head == nullptr)
            {
                head = Node; 
                temp = Node; 
            }
            else 
            {
                temp->next = Node; 
                temp = temp->next; 
            }
             Node->val = list2->val; 
            list2 = list2->next;
        }
        return head; 
    }
};
