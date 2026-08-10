//92. Reverse Linked List II
//Given the head of a singly linked list and two integers left and right where left <= right.
//reverse the nodes of the list from position left to position right, and return the reversed list.
//https://leetcode.com/problems/reverse-linked-list-ii/submissions/2101780340/

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0,head);
        ListNode* prev =&dummy;

        for(int i=0 ; i<left -1 ;i++){
            prev = prev -> next;
        }

        ListNode* curr = prev -> next;

        for(int i=0 ; i<right - left ; i++){
            ListNode* nextnode = curr -> next;
            curr -> next = nextnode -> next;
            nextnode -> next = prev -> next;
            prev -> next = nextnode;
        }
        return dummy.next;
        
    }
};