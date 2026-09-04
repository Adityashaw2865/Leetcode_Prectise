class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* previous = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            previous = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        previous->next = slow->next;

        return head;
    }
};