/*
    *********
    * Deque *
    *********
    -Dont use this use List instead one .remove() function present which works in O(1)

    In the case of vecotr and array we had a continious memory to store data but that is not the case in 
    deque where we have have multiple fixed static arrays and the data stored location is also stored.

    Advantages: 1.we can do insertion and deletion on both ends
                2.random access is possible same as array and vector
                2.it is also dynamic as vector

    Functions:      .push_back()
                    .push_front()
                    .pop_front()
                    .pop_back()
                    .fill(0)                            //fills the entire array with 0
                    .at( )                              //accessing a specific position and getting its value
                    .front() or arr.at(0)               //will give the first element in the array
                    .back()  or arr.at(arr.size()-1)    //will give the end element in the array
                    .empty()                            //will  tell if array is empty of not
                    .erase()
                    .clear()                            //empties the entire vector
                    .size()                             //tells the number of elements in an array

    Iterators(addresses):   .begin()    //starting point of the array the 0th element
                            .end()      //empty address after the last element in the array which will be a null character
                            .rbegin()   //ending point of the array 
                            .rend()     //empty address before the beginning of the array which will be a null charcter
*/
#include<deque>
#include<iostream>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.pop_front();
    //will delete the first element
    d.erase(d.begin(),d.begin()+1);    //here we have to give the arguments from where to where we want to delete which can me single element, range of elements.
    cout<<endl;

    cout<<"Print First Index Element-> "<<d.at(1)<<endl;
    cout<<"Front Element: "<<d.front()<<endl;
    cout<<"Back Element: "<<d.back()<<endl;
    cout<<"Empty or not give me bool output->"<<d.empty()<<endl;
}