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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }

        ListNode* temp = head;
        int count1 = 0;
        while(temp != NULL){
            temp = temp -> next;
            count1++;
        }

        if(count1 < k){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        int count2 = 1;

        while(count2 <= k && curr != NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count2++;
        }

        if(forward != NULL ){
            head -> next = reverseKGroup(forward, k);
        }
        return prev;
    }
};