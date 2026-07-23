//83.Remove Duplicates from Sorted List
//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/2078760484/

#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;

        while (current && current->next) {
            if (current->val == current->next->val) {
                ListNode* duplicate = current->next;
                current->next = current->next->next;
                delete duplicate;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};