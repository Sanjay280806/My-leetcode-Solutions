// 24 . Swap Nodes in Pairs
// Given a linked list, swap every two adjacent nodes and return its head.
// You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
// https://leetcode.com/problems/swap-nodes-in-pairs/submissions/2084799684/

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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0,head);
        ListNode* prev = &dummy;

        while(prev -> next && prev -> next -> next){
            ListNode* first = prev -> next;
            ListNode* second = prev -> next -> next;

            prev -> next = second;
            first-> next  = second -> next;
            second -> next = first;

            prev = first ;
        }
        return dummy.next;
        
    }
};