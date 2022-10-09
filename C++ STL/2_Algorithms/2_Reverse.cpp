/*
    ***********
    * Reverse *
    ***********

    - Reverse is done of array or on vector which converts and vector/array to decending order
    - O(nlog n)
*/

#include<algorithm>
#include<vector>
#include<array>
#include<iostream>
using namespace std;

int main(){
//Array Sorting
    array<int,8> array{1,2,3,4,5,6,7,8};

    reverse(array.begin(),array.end());        //sorting an array will be same for vector

    //Printing
    cout<<"Reverse array is: ";
    for(int i{}; i<array.size(); i++){
        cout<<array.at(i)<<", ";
    }
    cout<<endl;

    //Vector Sorting    
    vector<int>w{1,2,3,4,5,6,7,8};

    reverse(w.begin()+2,w.end()-2);

    //Printing
    cout<<"Sorted vector from 6 - 3 is: ";
    for(int i{}; i<w.size(); i++){
        cout<<w.at(i)<<", ";
    }       
}