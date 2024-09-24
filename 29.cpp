// 92. Reverse Linked List II

// Linked Lists

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (!head || left == right)
            return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy;

        for (int i = 0; i < left - 1; i++)
        {
            prev = prev->next;
        }
        ListNode *current = prev->next;

        for (int i = 0; i < right - left; i++)
        {
            ListNode *next_node = current->next;
            current->next = next_node->next;
            next_node->next = prev->next;
            prev->next = next_node;
        }

        return dummy.next;
    }
};

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int left = 2;
    int right = 4;

    Solution sol;

    ListNode *newHead = sol.reverseBetween(head, left, right);
    ListNode *it = newHead;


    while (it)
    {
        cout << it->val << " ";
        it = it->next;
    }

    return 0;
}