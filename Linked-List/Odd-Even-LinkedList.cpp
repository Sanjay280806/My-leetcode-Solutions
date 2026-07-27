// 328. Odd Even Linked List
// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
// The first node is considered odd, and the second node is even, and so on.
//https://leetcode.com/problems/odd-even-linked-list/submissions/2083400038/

// Maintain three pointers:
// odd → current odd node
// even → current even node
// evenHead → first even node (to attach later)

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;

        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* evenhead = even;

        while(even != nullptr && even -> next != nullptr){
            odd -> next = even -> next;
            odd = odd ->next;

            even -> next = odd -> next;
            even = even -> next;

        }
        
        odd -> next = evenhead;

        return head;
    }
};

