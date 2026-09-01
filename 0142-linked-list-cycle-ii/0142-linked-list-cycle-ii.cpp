class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                break;
            }
        }
        if (fast == NULL || fast->next == NULL) {
            return NULL;
        }
        slow = head;
        while (slow != fast) {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};