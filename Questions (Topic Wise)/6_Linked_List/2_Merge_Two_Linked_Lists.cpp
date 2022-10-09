// Q- https://leetcode.com/problems/merge-two-sorted-lists/
// Video- https://www.youtube.com/watch?v=GfRQvf7MB3k

#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 ==NULL && list2 ==NULL) return NULL;
        if(list1 ==NULL) return list2;
        if(list2 ==NULL) return list1;

        ListNode *head = NULL;

        if(list1->val <= list2->val){
            head = list1;
            list1 = list1->next;
        }
        else{
            head = list2;
            list2 = list2->next;
        }

        ListNode *current = head;

        while (list1 != NULL && list2 != NULL){

            if(list1->val <= list2->val){
                current->next = list1;
                current = list1;
                list1 = list1->next;
            }
            else{
                current->next = list2;
                current = list2;
                list2 = list2->next;
            }
        }

        //we are going to add the remaining list from the 2 nodes
        if(list1 == NULL){
            current->next = list2;
        }
        else current->next = list1;

        return head;
        
    }
};