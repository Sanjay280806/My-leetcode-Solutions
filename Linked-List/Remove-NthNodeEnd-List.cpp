//19.Remove Nth Node From End of List
//Given the head of a linked list, remove the nth node from the end of the list and return its head.
//Input: head = [1,2,3,4,5], n = 2
//Output: [1,2,3,5]
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/2081126071/

#include<bits/stdc++.h>
using namespace std;
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
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0,head);
        ListNode* slow =&dummy;
        ListNode* fast =&dummy;

        for(int i=0 ; i<=n ;i++){
            fast = fast -> next;
        }

        while(fast != nullptr){
            slow = slow ->next;
            fast = fast -> next;
        }

        ListNode* toDelete = slow -> next;
        slow -> next = slow -> next -> next;
        delete toDelete;

        return dummy.next;    
    }
};
