/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head; ListNode* q = head;
        while (p->next) {
            p = p->next;
            if (!n) q = q->next;
            else n--;
        }
        if (n==1) {
            q = head;
            head = head->next;
            delete q;
        }
        else {
            p = q->next;
            q->next = p->next;
            delete p;
        }
        return head;
    }
};