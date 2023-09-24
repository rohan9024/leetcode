// 141. Linked List Cycle

// Linked List


#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow_pointer = head;
        ListNode *fast_pointer = head;

        while (fast_pointer->next != nullptr && fast_pointer != nullptr)
        {
            slow_pointer = slow_pointer->next;
            fast_pointer = fast_pointer->next->next;

            if (slow_pointer == fast_pointer)
                return true;
        }
        return false;
    }
};

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next;

    Solution sol;

    cout << sol.hasCycle(head);

    return 0;
}
