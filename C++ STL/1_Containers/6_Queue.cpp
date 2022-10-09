/*
    *********
    * Queue *
    *********
    
    -FIFO Operation ()

    -All Operation take O(1) just pop takes O(n) linear time

    Functions: .push()
               .pop()
               .front()     // first element
               .back()      //last element
               .empty()
               .size()

    Iterator:   XX_NO ITERATORS_XX

    Can be asked in interview to be implemented as it is easy.
*/
#include<queue>
#include<iostream>
using namespace std;

int main(){

    queue<string> q;
    queue<int>r;

//Insertion
    q.push("vineet");
    q.push("harsh");
    q.push("sanjeev");
    q.pop();            // the first element added will be removed in queue

//Delete
    while(!q.empty()){
        q.pop();
    }

    cout<<"First Element "<<q.front()<<endl;    //winn be vineer as FIFO applies
    cout<<"Size-> "<<q.size()<<endl;
}