
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *temp1 = head; 
        ListNode *temp2 = head; 
        vector<int> v; 
        while (temp1->next != nullptr)
        {
            if (temp1->next != nullptr)
            {
                temp2 = temp1->next; 
                while (temp2->next != nullptr && temp1->val >= temp2->val)
                {
                    temp2 = temp2->next; 
                }
                
                if (temp2->val > temp1->val)
                {
                    v.push_back(temp2->val); 
                }
                else 
                {
                    v.push_back(0); 
                }
            }
            temp1 = temp1->next; 
        }
        v.push_back(0); 
        return v; 
    }
};
