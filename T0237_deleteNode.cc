/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /**
  * Node is given and delete itself. The linked list will have at least two elements.
  * Copy next node and delete the next node. The given node will not be the tail and 
  * it will always be a valid node of the linked list.
  */
 
class Solution {
public:
    void deleteNode(ListNode* node) {

        node->val = node->next->val;
        node->next = node->next->next;
    
    }
};
