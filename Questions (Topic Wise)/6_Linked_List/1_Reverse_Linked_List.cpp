// Q- https://leetcode.com/problems/reverse-linked-list/
// Video- https://www.youtube.com/watch?v=XgABnoJLtG4

/*
    Given the head of a singly linked list, reverse list & return
    Ex. head = [1,2,3,4,5] -> [5,4,3,2,1], head = [1,2] -> [2,1]

    Maintain prev, curr, & next pointers, iterate thru & reverse

    Time: O(n)
    Space: O(1)
*/


#include<iostream>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
    //   ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}            // can look in class and objects or read this article -> https://leetcode.com/problems/add-two-numbers/discuss/122357/c-what-does-listnodeint-x-valx-nextnull-mean
    //   ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

//Look at this animation of the node https://leetcode.com/problems/reverse-linked-list/discuss/803955/C%2B%2B-Iterative-vs.-Recursive-Solutions-Compared-and-Explained-~99-Time-~85-Space

class Solution {
public:
    ListNode *reverseList(ListNode *head) { //as this function is returning a ListNode so its ListNode instead of void or int

        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode *previous = NULL;
        ListNode *current = head;
        ListNode *next = NULL;

        while(current!= NULL){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
    return previous;
    }
};

void traverseNode(ListNode *head)
{
    cout << "Start traversal" << endl;
    while(head!=NULL)
    {
        cout << head->val <<"->";
        head = head->next;
    }
    cout <<endl<< "Finish traversal" << endl;
}

int main()
{
    ListNode *node1 = new ListNode(1);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(3);
    ListNode *node4 = new ListNode(4);
    ListNode *node5 = new ListNode(5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    traverseNode(node1);

    cout <<endl;

    Solution sol;
    ListNode *newHead = sol.reverseList(node1);
    traverseNode(newHead);

    return 0;
}
