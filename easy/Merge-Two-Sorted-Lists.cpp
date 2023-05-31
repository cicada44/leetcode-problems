//-----------------------------------------------------------------------------
//
// Source code for 'Merge Two Sorted Lists' task
// URL: https://leetcode.com/problems/merge-two-sorted-lists/
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
    void insert_after(ListNode *list, int value) {
        ListNode *tmp = new ListNode(value, list->next);
        list->next = tmp;
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        ListNode *dummy = new ListNode();
        ListNode *ret = dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val == list2->val) {
                insert_after(dummy, list1->val);
                dummy = dummy->next;
                insert_after(dummy, list2->val);
                list1 = list1->next;
                list2 = list2->next;
            } else if (list1->val > list2->val) {
                dummy->next = new ListNode(list2->val);
                list2 = list2->next;
            } else if (list1->val < list2->val) {
                dummy->next = new ListNode(list1->val);
                list1 = list1->next;
            }

            dummy = dummy->next;
        }

        while (list1 != nullptr) {
            dummy->next = new ListNode(list1->val);
            dummy = dummy->next;
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            dummy->next = new ListNode(list2->val);
            dummy = dummy->next;
            list2 = list2->next;
        }

        return ret->next;
    }
};

int main() {}
