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
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* back = NULL;
        ListNode* front = NULL;
        while (temp){
            front = temp->next;
            temp->next = back;
            back = temp;
            temp = front;
        }
        return back;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode* newHead = reverse(slow);
        ListNode* temp = head;
        ListNode* temp2 = newHead;
        while (temp && temp2){
            if (temp->val != temp2->val) {
                reverse(newHead);
                return 0;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        reverse(newHead);
        return 1;
    }
};