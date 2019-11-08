/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * Remove Duplicates from Sorted List
 * Given a sorted linked list, delete all duplicates such that
 * each element appear only once.
 */

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *cur;
    cur = head;

    while(cur && cur->next) {
        if(cur->val == cur->next->val)
            //free(cur->next);
            cur->next = cur->next->next;
        else 
            cur = cur->next;
    }

    return head;
}
