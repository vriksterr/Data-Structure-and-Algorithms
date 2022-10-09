// Here is how to use linked list
// It has 1 Value and 1 Next pointer pointing to the next Node and that is pointing to the next Node
// video- https://www.youtube.com/watch?v=HKfj0l7ndbc && https://www.youtube.com/watch?v=R9PTBwOzceo&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=31
// https://www.geeksforgeeks.org/why-linked-list-is-implemented-on-heap-memory-rather-than-stack-memory/


#include<iostream>
using namespace std;

class Node{
    public:
        int Value;
        Node *Next; //when you try to acces A.next->val = 0; you wont be as it is not initialized and will have a garbage address so you will have to do A.next= new TEST(); and  then you can do the previous command
};

void printList(Node *n){

    while(n != NULL){
        cout<<n->Value<<", ";
        n = n->Next;            // this is the incrementer/iterator.
    }
}

int main(){
    //head is a pointer that is pointing to heap where value and next are declared
    Node *head = new class Node;       // head second and third will all have individual Value and Next pointer which are declated in heap coz we typed new Node.
    Node *second = new Node();         // this is the prefered way of writing the above is just another way of writing it as well for understanding purpose.
    Node *third = new Node();
    
    auto value_size = sizeof(head->Value);
    auto next_size = sizeof(head->Next);
    auto value_address = &head->Value;
    auto next_address = &head->Next;
    auto class_object_head_address = &head; //remember head is a pointer so it will also have its own address

    cout<<"Size of value on heap-> "<< value_size<<endl;
    cout<<"Size of next on heap-> "<< next_size<<endl;

    (*head).Value = 1;      //can be written like this or like below
    head->Next = second;

    second->Value = 2;
    second->Next = third;

    third->Value = 3;
    third->Next = NULL;  // or NULL both works

    printList(head);

    cout<<endl;
}