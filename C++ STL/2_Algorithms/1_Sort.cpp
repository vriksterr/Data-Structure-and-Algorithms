/*
    ***********
    * Sorting *
    ***********

    - Sorting is done of array or on vector which converts and vecotr/array to ascending order
    - O(nlog n)
*/

#include<algorithm>
#include<vector>
#include<array>
#include<iostream>
using namespace std;

int main(){
//Array Sorting
    array<int,8> array{8,7,6,5,4,3,2,1};

    sort(array.begin(),array.end());        //sorting an array will be same for vector

    //Printing
    cout<<"Sorted array is: ";
    for(int i{}; i<array.size(); i++){
        cout<<array.at(i)<<", ";
    }
    cout<<endl;
    
//Vector Sorting    
    vector<int>w{8,7,6,5,4,3,2,1};

    sort(w.begin()+2,w.end()-2);

    //Printing
    cout<<"Sorted vector from 6 - 3 is: ";
    for(int i{}; i<w.size(); i++){
        cout<<w.at(i)<<", ";
    }       
}