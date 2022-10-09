/*
    *********
    * Stack *
    *********

    -LIFO (Last in First Out)

    Functions:  .push() or emplace
                .pop()
                .top()
                .empty()
                .size()

    Iterator:   XX_NO ITERATORS_XX

    Can be asked in interview to be implemented as it is easy.

*/
#include<stack>
#include<iostream>
using namespace std;

int main(){
    stack<string> s;

//Insertion
    s.push("vineet");
    s.push("rohit");
    s.push("yogita");
    s.push("rashmi");
    s.push("manas");

//Deletion
    s.pop();    //the last added element will get popped first that is yogita RIP buddy

    //to delete the entire stack there is only this type way!
    while(!s.empty()){
        s.pop();
    }
    
    
    cout<<"Top Element-> "<<s.top()<<endl;             //will print the last element as it is in the top stack, also dont call top if stack is empty or use a if(!s.empty()){s.top};
    // cout<<"Bottom Element-> "<<s.bottom()<<endl;    //wont work
    cout<<"Size of stack-> "<<s.size()<<endl;
    cout<<"Empty or not-> "<<s.empty()<<endl;
}