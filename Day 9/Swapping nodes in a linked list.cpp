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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *left = NULL, *right = NULL, *temp = head;
        int n = 0;

        while (temp != NULL) {
            n++;
            temp = temp->next;
        }

        temp = head;
        for (int i = 1; i <= n; i++) {
            if (i == k)
                left = temp;
            if (i == n - k + 1)
                right = temp;
            temp = temp->next;
        }

        if (left != NULL && right != NULL) {
            int val = left->val;
            left->val = right->val;
            right->val = val;
        }

        return head;
    }
};