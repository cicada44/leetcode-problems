//-----------------------------------------------------------------------------
//
// Source code for 'Remove Duplicates from Sorted List' task
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
//
//-----------------------------------------------------------------------------

#include <iostream>

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
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *dummyHead = head, *tmp = head;

        while (head != nullptr) {
            while (tmp->next != nullptr) {
                if (tmp->val == tmp->next->val) {
                    tmp = tmp->next;
                } else {
                    break;
                }
            }
            tmp = tmp->next;
            head->next = tmp;
            head = head->next;
        }

        return dummyHead;
    }
};

int main() {}
