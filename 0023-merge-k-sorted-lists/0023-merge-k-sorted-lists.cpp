class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;

        for (ListNode* head : lists) {
            while (head != NULL) {
                ans.push_back(head->val);
                head = head->next;
            }
        }

        sort(ans.begin(), ans.end());

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        for (int x : ans) {
            temp->next = new ListNode(x);
            temp = temp->next;
        }

        return dummy->next;
    }
};