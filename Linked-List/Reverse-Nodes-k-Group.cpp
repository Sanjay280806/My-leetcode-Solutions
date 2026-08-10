//25. Reverse Nodes in k-Group
//Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
//k is a positive integer and is less than or equal to the length of the linked list. 
//If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.
//https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/2101812938/


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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        while(curr && count<k){
            curr = curr -> next;
            count++;
        }

        if(count<k) return head;

        ListNode* prev = nullptr;
        curr = head;
        for(int i=0 ; i<k ;i++){
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head -> next = reverseKGroup(curr,k);

        return prev;
        
    }
};