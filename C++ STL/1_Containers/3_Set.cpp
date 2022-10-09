/*
    *******
    * Set *
    *******
    
    -Set only stores Unique elements no repetition
    -Once an element has been added you cannot modify that element just ADD or Delete
    -A set allows you full access in sorted order, so you can, for example, find two elements somewhere in the middle of the set, then traverse in order from one to the other.
    -All set functions are of O(log n)
    
    There are 2 types of set 1.Ordered Set- the set will be in ascending order with starting index being smallest and ending being the largest and the elements you fetch are in ordered also it is slower than unordered.
                             2.Unordered Set- the elements your fetch are in random order as you feed in 

    Q-When should we use a SET?
    A-Generally in questions where we are asked to find/store unique elements

    Functions:  .insert()           //Adds element in the set
                .find()             //will return an iterator that points to the element inside ()
                .count()            //Tells how many times an element is present in the set mostly used in multiset
                .empty()
                .erase(begin,end)
                .clear()            //deletes everything
                .size()
                
    Iterators:  .begin()    //starting point of the array the 0th element
                .end()      //empty address after the last element in the array which will be a null character
                .rbegin()   //ending point of the array 
                .rend()     //empty address before the beginning of the array which will be a null charcter
    
     Implementation will not be asked in interview just the name will be asked, SET implements Red Black Tree 

*/
#include<set>
#include<unordered_set>
#include<iostream>
using namespace std;

int main(){

    set<int> st;            //O(log n), use this if you want ascending order and all unique
    unordered_set<int> p;   //O(1), use this if we dont require to store elements in ascending order
    multiset<int>q{1,1,1,2,2,3,4,4,5,5,5,5};         //can store multiple repeating values in ascending order like {1,1,1,2,2,3,4,4,5,5,5,5}
//INSERT
    st.insert(5);           //insert takes Log N time where N is the size of the set
    st.insert(6);           // alternatively st.emplace(6) which is faster for Competative programming
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(9);
    st.insert(2);
    st.insert(3);
    st.insert(1);
    //cout<<st[0];            //we cannot access set elements like this 

//ERASE Functionality
    st.erase(st.begin());                  //log n
    st.erase(5);                           //st.eraser(key) will delete the key. For multiset will erase all 5
    st.erase(st.begin(),st.end());         //Deleting the entire set.
    q.erase(q.find(2));                    //Will erase the first 2, will also work with other sets
    q.erase(q.find(2),q.find(5));          //will delete 2 and 5, will also work with other sets
    //st.erase(st.begin(),st.begin() +2);  //wont work instead you have to use for loop. Let us assume you have to delete a range( st. begin() , st.begin()+2) . Then take a for loop run it 2 times. Then you will a get a pointer (pt) pointing to st.begin()+2 . Then pass it as st.erase(st.begin(),pt) .

//Find Function
    auto iterator = st.find(4);     //st.find() will return an iterator that points to 1, works in log n. For multiset will return the first element address
    auto iterator2 = st.find(69);    //if the key is not found it will be iterator = s.end();

//Printing a SET
    //1st method
    for(auto it = st.begin(); it!=st.end(); it++){
        cout<< *it<<", ";
    }
    //2nd method
    for(auto it:st){
        cout<<it<<", ";
    }

    // adding numbers in the set from a user
    // int n;
    // cout<<endl<<"Enter how many numbers you want to enter in a set?->";
    // cin>>n;

    // for(int i{};i<n;i++){
    //     int x;
    //     cin>>x;
    //     st.insert(x);
    // }

    cout<<"First element of the SET is-> "<< *st.begin()<<endl;     // gives the first element of the set
    cout<<"Second element if the SET is-> "<< *st.begin()+1<<endl;  // gives the second element of the set
    cout<<".find(4) returns an iterator and that is-> "<< *iterator<<endl;// we had to dereference it to get the value stored at that address which will be the same value we did find for
    cout<<".count(5) for multiset, Tell how many times 5 is present-> "<<q.count(5)<<endl;
}