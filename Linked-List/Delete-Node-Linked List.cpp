// 237 .Delete Node in a Linked List
// Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
// https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/2094407765/

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
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};