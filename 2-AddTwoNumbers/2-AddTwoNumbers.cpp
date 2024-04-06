/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;

        ListNode* head = new ListNode(0, nullptr);
        ListNode* current = head;

        ListNode* currentL1 = l1;
        ListNode* currentL2 = l2;
        int incrementalValue = 0;

        while (currentL1 != nullptr || currentL2 != nullptr) {
[
