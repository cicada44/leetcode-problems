//-----------------------------------------------------------------------------
//
// Source code for 'Remove Nth Node From End of List' task
// URL: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//
//-----------------------------------------------------------------------------

/* Definition for singly-linked list. */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *fast = head, *slow = head;

        for (int i = 0; i != n; ++i)
            fast = fast->next;
        if (fast == nullptr) return head->next;
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;

        return head;
    }
};

int main() {}
