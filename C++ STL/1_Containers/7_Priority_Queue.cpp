/*
    ******************
    * Priority Queue *
    ******************

    Stores all in Sorted order and dose it in log N

    -A priority queue only gives you access to one element in sorted order -- i.e., you can get the highest priority item, and when you remove that, you can get the next highest priority, and so on.
    
    Two Types:
    1.Max Priority Queue-> where the maximum element will be on the top and minimum at the bottom
    2.Min Priority Queue-> where the minimul element will be on the top and maximul at the bottom

    Functions:  .push()
                .pop()
                .top()
                .empty()
                .size()

    Iterator:   XX_NO ITERATORS_XX

    Implementation will not be asked in interview if it is going to be asked it will be a single question
*/
#include<queue>
#include<iostream>
using namespace std;

int main(){
    
    priority_queue<int>max;                            //Max Priority Queue
    priority_queue<int,vector<int>,greater<int>>min;   //Min Priority Queue

//Max Priority Queue
    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);

//Printing, so we are getting the biggest element and then removing it so we get the next biggest this way we can print the max
    int n{max.size()};  // the reason why we did this is coz the size is changing as we are popping at each loop
    for(int i{}; i<n; i++){
        cout<<max.top()<<endl;
        max.pop();
    }
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
//Min Priority Queue

    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);

    int n2{min.size()};  
    for(int i{}; i<n2; i++){
        cout<<min.top()<<endl;
        min.pop();
    }

    cout<<"Empty or not-> "<<max.empty();   // this will show empty as we popped all
}