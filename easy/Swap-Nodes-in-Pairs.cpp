//-----------------------------------------------------------------------------
//
// Source code for 'Swap Nodes in Pairs' task
// URL: https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode *swapPairs(ListNode *head) {
        if (!head || !head->next) return head;

        ListNode *dummy = new ListNode();
        ListNode *swapper = head, *prev = dummy;

        while (swapper != nullptr) {
            prev->next = swapper->next;
            swapper->next = prev->next->next;
            prev->next->next = swapper;
            prev = swapper;
            swapper = swapper->next;
        }

        return dummy->next;
    }
};

int main() {}
