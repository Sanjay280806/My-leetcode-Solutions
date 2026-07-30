// 2.Add 2 Numbers
// You are given two non-empty linked lists representing two non-negative integers.
// The digits are stored in reverse order, and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.
// https://leetcode.com/problems/add-two-numbers/submissions/2087528642/

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
        return addwithcarry(l1,l2,0);
    }
private:
    ListNode* addwithcarry(ListNode* l1 , ListNode* l2 , int carry =0){
        if(!l1 && !l2 && carry == 0) return nullptr;

        int sum = carry;
        if(l1) sum+= l1 -> val;
        if(l2) sum+= l2 -> val;

        ListNode* node = new ListNode(sum%10);
        node -> next = addwithcarry(
            l1 ? l1 -> next : nullptr,
            l2 ? l2 -> next : nullptr,
            sum/10
        );
        return node;
    }
};