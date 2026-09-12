class Solution {
public:
    int pairSum(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;

        // Middle find karna
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Second half reverse karna
        ListNode* prev = NULL;
        ListNode* curr = slow;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // First half aur reversed second half ka sum
        int maxi = 0;
        ListNode* first = head;
        ListNode* second = prev;

        while (second != NULL) {
            maxi = max(maxi, first->val + second->val);
            first = first->next;
            second = second->next;
        }

        return maxi;
    }
};