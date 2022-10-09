/*
    *******
    * Map *
    *******

   -Same property as set it stores everything in sorted order(sorting is done based on key which
    can be numeric or alphabatical).
   
   -Time Complexity O(log n) for map. And O(1) in unordered,o(n) in worst case, where n is the container size

   -Remember that all keys are unique(no duplicates) and that 1 key will point to just 1 value but multiple key can point
    to same value.

    Functions:  .insert() or m[]{}  //Adds element in the set
                .first .second      //for the pair access or modificaton
                .at(key) or a[key]
                .find()             //will return an iterator that points to the element inside ()
                .count()            //Tells how many times an element is present in the set mostly used in multiset
                .empty()            //is it empty or not
                .erase(begin,end)
                .clear()            //deletes everything
                .size()
                
     Iterators: .begin()    //starting point of the array the 0th element
                .end()      //empty address after the last element in the array which will be a null character
                .rbegin()   //ending point of the array 
                .rend()     //empty address before the beginning of the array which will be a null charcter

    Implementation will not be asked in interview, but its implements by AVL Tree

*/
#include<map>
#include<unordered_map>
#include<iostream>
using namespace std;

int main(){

    map<int,string>m;   //its implementation is like a pair where m.first = something; and m.second = something;
    map<int,int>n;
    map<string,int>o;
    unordered_map<int,string>p;
    multimap<int,string>q;  //same as multiset here there are no unique keys and can store multiple keys of same name

//Insertion
    m[1]="vineet";  //Here m[1] is key and vineet is value
    m[2]="Sanjeev";
    m[13]="ramesh";
    m[20]="yogesh";
    m[99]="rashmi";
    m[1]="maan";    //Here key one will be overwritten with maan or m.emplace(1,"maan");
    m.insert({5,"yogita"}); // this will insert a new key 5 with value being yogita
    
    n[2]=1;
    n[2]++;     // this increments the int pair (increment only works for pair)

//Deletion
    m.erase(99);            // give the keyname and it will remove it and value associated to that key
    //Rest all same as array/vector
    
//Print
    //easy
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;    //will print 1 maan and 2 Sanjeev. The output will be in sorted in sorted map and will be unsorted in unsorted map
    }

    //typical 
    for(auto it{m.begin()}; it != m.end(); it++ ){
        cout<<(*it).first<<" "<<(*it).second<<endl;     //or cout<<it->first<<" "<<it->second;
    }

    // cout<<".find() iterator for 1 will be->"<<  *iterator<<endl;    //wont work

//Pair class
    pair<int,int>pr{1,2};                     //where 1 is the pr.first element(key) and 2 is pr.second element
    pair<pair<int,int>,int>pr2{{1,2},3};      //nested pairs where pr2.first = {1,2} and pr2.second = {3}
    cout<<"Printing the second element 2 of the pair{1,2}-> "<<pr2.first.second<<endl;
    cin>>pr2.first.second;                    //can also modify with this
    pair<pair<int,int>,pair<int,int>>pr3{{1,2},{3,4}};
    cout<<pr3.first.first;  //will print 1
    // cout<<pr3.first;     //need operator overloading for this to work

    //we can keep on creating pair on pair like this endlessly.
    //Unordered map cannot have a pair as it can only store single keys.
}