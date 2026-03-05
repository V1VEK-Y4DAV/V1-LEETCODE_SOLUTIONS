/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void helper(ListNode* &head, ListNode* &prev, ListNode* &curr, ListNode* &forward){
        if(curr == NULL){
            return ;
        }

        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        helper(head, prev, curr, forward);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        helper(head, prev, curr, forward);
        return prev;
    }
};