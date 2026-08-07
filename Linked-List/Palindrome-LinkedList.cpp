// 234.Palindrome Linked List
// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
// https://leetcode.com/problems/palindrome-linked-list/submissions/2098105343/

#include<bits/stdc++.h>
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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=nullptr && fast -> next !=nullptr){
            slow = slow -> next;
            fast = fast -> next ->next;
        }
        
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while(curr!=nullptr){
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }

        ListNode*left = head;
        ListNode*right = prev;

        while(right!=nullptr){
            if(left -> val != right ->val) return false;

            left = left -> next;
            right = right -> next;
        }
        return true;
    }
};