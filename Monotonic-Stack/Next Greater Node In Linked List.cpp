//1019. Next Greater Node In Linked List
// You are given the head of a linked list with n nodes.
// For each node in the list, find the value of the next greater node.
// That is, for each node, find the value of the first node that is next to it and has a strictly larger value than it.
// Return an integer array answer where answer[i] is the value of the next greater node of the ith node (1-indexed).
// If the ith node does not have a next greater node, set answer[i] = 0.
// https://leetcode.com/problems/next-greater-node-in-linked-list/submissions/2188838158/

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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>values;
        ListNode* current = head ;
        while(current!=nullptr){
            values.push_back(current -> val);
            current = current -> next;
        }
        int n = values.size();
        vector<int>result(n,0);
        stack<int>stk;

        for(int i=0 ;i<n ;i++){
            while(!stk.empty() && values[i] > values[stk.top()]){
                int poppedIndex = stk.top();
                stk.pop();
                result[poppedIndex] = values[i];
            }
            stk.push(i);
        }
        return result;
        
    }
};