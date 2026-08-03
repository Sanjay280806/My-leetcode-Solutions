//430 . Flatten a Multilevel Doubly Linked List
//You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional child pointer
//This child pointer may or may not point to a separate doubly linked list, also containing these special nodes.
//These child lists may have one or more children of their own, and so on, to
//https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/submissions/2093028370/

#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;
        while(curr){
            if(curr -> child){
                Node*next = curr -> next;
                Node*tail = curr -> child;
                while(tail -> next){
                    tail = tail -> next;
                }
                curr -> next = curr -> child;
                curr -> child -> prev = curr;
                tail -> next = next;

                if(next){
                    next -> prev = tail;
                }
                curr -> child = nullptr;
            }
            curr = curr -> next;
        }
        return head;

        
    }
};