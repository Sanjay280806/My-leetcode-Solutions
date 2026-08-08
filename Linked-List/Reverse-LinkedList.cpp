//206. Reverse Linked List
//Given the head of a singly linked list, reverse the list, and return the reversed list.
//https://leetcode.com/problems/reverse-linked-list/submissions/2099476927/
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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;

        std::stack<ListNode*>st;
        for(ListNode* node = head ; node != nullptr ; node = node -> next){
            st.push(node);
        }

        ListNode* newhead = st.top();
        st.pop();
        ListNode* curr = newhead;
        while(!st.empty()){
            curr -> next = st.top();
            st.pop();
            curr = curr -> next;
        }
        curr -> next = nullptr;
        return newhead;   
    }
};