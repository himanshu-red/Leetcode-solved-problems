class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, bool> hash; 
        ListNode *tempA = headA; 
        while (tempA != nullptr)
        {
            hash[tempA] = true; 
            tempA = tempA->next; 
        }
        ListNode *tempB = headB; 
        while (tempB != nullptr)
        {
            if (hash.find(tempB) != hash.end())
                return tempB; 
            tempB = tempB->next; 
        }
        return nullptr; 
    }
};
