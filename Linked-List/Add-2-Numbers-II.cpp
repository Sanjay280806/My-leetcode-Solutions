// 445. Add Two Numbers II
// You are given two non-empty linked lists representing two non-negative integers.
// The most significant digit comes first and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.
// Input: l1 = [7,2,4,3], l2 = [5,6,4]
// Output: [7,8,0,7]
//  https://leetcode.com/problems/add-two-numbers-ii/submissions/2090409055/

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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        stack<int> s1;
        stack<int> s2;

        while (l1) {
            s1.push(l1->val);
            l1 = l1->next;
        }

        while (l2) {
            s2.push(l2->val);
            l2 = l2->next;
        }

        int carry = 0;
        ListNode* head = nullptr;

        while (!s1.empty() || !s2.empty() || carry) {

            int sum = carry;

            if (!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }

            if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }

            ListNode* node = new ListNode(sum % 10);

            node->next = head;
            head = node;

            carry = sum / 10;
        }

        return head;
    }
};