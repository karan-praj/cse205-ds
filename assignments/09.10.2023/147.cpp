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
    ListNode* insertionSortList(ListNode* head) {
        return sort(head);
    }






ListNode* sort(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head; 
    }

    ListNode* sortedHead = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {
        ListNode* next = curr->next;
        if (sortedHead == nullptr || curr->val < sortedHead->val) {
           
            curr->next = sortedHead;
            sortedHead = curr;
        } else {
            
            ListNode* prev = sortedHead;
            while (prev->next != nullptr && prev->next->val <= curr->val) {
                prev = prev->next;
            }
            curr->next = prev->next;
            prev->next = curr;
        }
        curr = next;
    }

    return sortedHead; 
}

};