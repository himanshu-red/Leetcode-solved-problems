class Solution {
public:
    pair<ListNode *, ListNode *> removeNodes(ListNode *l1, int a, int b)
    {
        pair<ListNode *, ListNode *> ret; 
        ListNode *fast = l1;
        int count = 0; 
        while ((count+2 ) < a)
        {
            fast = fast->next->next; 
            count+=2; 
        }
        if (a - count == 2)
        {
            count++; 
            fast = fast->next; 
        }
        ret.first = fast; //the node after which nodes are to be deleted
        while (count+2 <= b+1)
        {
            fast = fast->next->next; 
            count+=2; 
        }
        if ((b+1) - count == 1)
        {
            fast = fast->next; 
        }
        ret.second = fast; //the nodes before which nodes are to be deleted
        return ret; 
        
    }
    ListNode * getLastNode(ListNode *list)
    {
        while (list->next != nullptr && list->next->next != nullptr)
        {
            list = list->next->next; 
        }
        if (list->next != nullptr)
        {
            list = list->next; 
        }
        return list; 
    }
  
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        pair<ListNode *, ListNode *> nodes = removeNodes(list1, a, b);   
        nodes.first->next = list2; 
        getLastNode(list2)->next = nodes.second; 
        return list1; 
    }
};
