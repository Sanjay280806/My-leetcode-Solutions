//86.Partition List
//Given the head of a linked list and a value x, 
//partition it such that all nodes less than x come before nodes greater than or equal to x.
//https://leetcode.com/problems/partition-list/submissions/2100622941/

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
    ListNode* partition(ListNode* head, int x) {
        ListNode lessHead(0) , greaterHead(0);

        ListNode* lesstail = &lessHead;
        ListNode* greatertail = &greaterHead;

        ListNode* current = head;

        while(current != nullptr){
            if(current -> val < x){
                lesstail -> next =  current;
                lesstail = lesstail -> next;
            }else{
                greatertail -> next = current;
                greatertail = greatertail -> next;
            }
            current = current -> next;
        }
        lesstail -> next = greaterHead.next;
        greatertail -> next = nullptr;

        return lessHead.next;
        
    }
};