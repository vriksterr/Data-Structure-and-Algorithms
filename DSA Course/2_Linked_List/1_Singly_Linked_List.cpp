#include <iostream>

using namespace std;

//making are declaring a Node and the values it is going to hold
class ListNode {
public:
    int val_;
    ListNode *next = nullptr;

    //default constructor of listnode
    ListNode(int val) {
        val_ = val;
    }
};

// Implementation for Singly Linked List
class LinkedList {
public:
    ListNode *head{nullptr};
    ListNode *tail{nullptr};
    
    //default constructor of linkedlist
    LinkedList() {
        // Init the list with a 'dummy' node which makes removing a node from the 
        // beginning of list easier.
        head = new ListNode(-1);        //when we are creating a new heap this is the address of the heap where it is declared
        tail = head;
    }

    void insertEnd(int val) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }

    void remove(int index) {
        int i = 0;
        ListNode *curr = head;
        while (i < index && curr) {
            i++;
            curr = curr->next;
        }
        
        // Remove the node ahead of curr
        if (curr) {
            curr->next = curr->next->next;
        }
    }

    void print() {
        ListNode *curr = head->next;
        while (curr!=NULL) {
            cout << curr->val_ << " -> ";
            curr = curr->next;
        }
        cout << endl;
    }
};   

int main(){
    LinkedList first;
    LinkedList();       //now we can create a class without an object but that object is needed as its is the address of where the data of that object is lockated its like a pointer, without the object the class gets created will all the variables but its useless as we dont have the address of where the class is in the memeory.

    first.insertEnd(1);
    first.insertEnd(2);
    first.insertEnd(3);
    first.insertEnd(4);
    first.insertEnd(5);


    //this part just to see what the addressing and memory allocation is like read more on Structural Padding in Interesting C++ learning from repo 
    cout << "Address of object(should be same as first element in class: " << &first << endl;
    cout << "Address of Head: " << &first.head << endl;
    cout << "Value stored by Head: " << first.head << endl;
    cout << "Address of val: " << &first.head->val_<<endl;
    cout << "address of Tail: " << &first.tail << endl;

    cout << endl << endl;
    cout << "Now Lets see the sizes of each!" << endl;
    cout << "Size of first: " << sizeof(first) << endl;
    cout << "Size of *head: " << sizeof(first.head) << endl; //size of head is 8 coz its storing 2 values 1st is the address of what it is pointing to 2nd all the other values
    cout << "Size of val: " << sizeof(first.head->val_) << endl;
    cout << "Size of ListNode: " << sizeof(ListNode) << endl;

    first.print();
}
