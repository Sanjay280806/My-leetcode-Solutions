//160.Intersection of Two Linked Lists
//Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
//https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/2078751637/

#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*pA = headA;
        ListNode*pB = headB;

        while(pA != pB){
            pA = (pA != nullptr) ? pA -> next : headB;
            pB = (pB != nullptr) ? pB -> next : headA;
        }

        return pA;
        
    }
};