/* https://leetcode.com/problems/linked-list-components/ */

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        ListNode *temp = head; 
        int count = 0; 
        bool found = false; 
        while (temp != nullptr )
        {
            found = false; 
           while (temp && binary_search(nums.begin(), nums.end(), temp->val))
          {
                found = true;
                temp = temp->next; 
          }
            if (found == true)
                  count++; 
            if (temp)
             temp = temp->next; 
        }
        return count; 
    }
};
