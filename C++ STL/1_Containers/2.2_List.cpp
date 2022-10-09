/*
    ********
    * List *
    ********

    It is a dublin linked list that means that it will have a starting and an ending element pointer.
    Direct access is not possible in List.

    Functions:      .push_back()
                    .push_front()
                    .pop_back()
                    .pop_front()
                    .fill(0)                            //fills the entire array with 0
                    .at( )                              //accessing a specific position and getting its value
                    .front() or arr.at(0)               //will give the first element in the array
                    .back()  or arr.at(arr.size()-1)    //will give the end element in the array
                    .empty()                            //will  tell if array is empty of not
                    .remove(2)                          //O(1)
                    .erase()
                    .clear()                            //empties the entire vector
                    .size()                             //tells the number of elements in an array

    Iterators(addresses):   .begin()    //starting point of the array the 0th element
                            .end()      //empty address after the last element in the array which will be a null character
                            .rbegin()   //ending point of the array 
                            .rend()     //empty address before the beginning of the array which will be a null charcter
*/
#include<list>
#include<iostream>
using namespace std;

int main(){
    list<int>l;
    list<int>l(5,100);  //size if 5 and all those position are initialized to 100
    list<int> n{l};     //the l list has been copied to n list.
    
    l.push_back(1);
    l.push_front(2);
    l.pop_back();
    l.pop_front();
    l.erase(l.begin()); //will erase the the element from the given arguments.

    cout<<"Size of List-> "<<l.size()<<endl;      
}