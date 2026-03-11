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
    void reverseList(ListNode* &head){
        if(head == NULL || head -> next == NULL){
            return;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }

        head = prev;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        reverseList(l1);
        reverseList(l2);

        ListNode* head = NULL;
        ListNode* tail = NULL;

        int sum = 0;
        int carry = 0;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while(temp1 != NULL || temp2 != NULL || carry){
            sum = carry;

            if(temp1 != NULL){
                sum +=  temp1 -> val;
                temp1 = temp1 -> next;
            }

            if(temp2 != NULL){
                sum += temp2 -> val;
                temp2 = temp2 -> next;
            }

            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);

            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                tail -> next = newNode;
                tail = newNode;
            }
        }
        reverseList(head);
        return head;
    }
};