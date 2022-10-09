//Q- https://leetcode.com/problems/linked-list-cycle/


/*
    Given head of a linked list, determine if it has a cycle in it

    Slow/fast pointers, if they ever intersect then there's a cycle

    Time: O(n)
    Space: O(1)
*/

/**
 * Definition for singly-linked list.
 * 
 */
#include<iostream>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
  
//Solution
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next != NULL && fast->next->next != NULL) {    // read this edge case: https://stackoverflow.com/questions/44734028/member-access-within-null-pointer-of-type-struct-listnode on why we just check for runner speed only
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        
        return false;
    }
};