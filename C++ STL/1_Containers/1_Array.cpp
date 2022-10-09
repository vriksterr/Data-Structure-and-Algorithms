/*
    *********
    * Array *
    *********
    Inside main:
                // max size of 10^6 -> int, double, char 
	                int arr[1000000];

                // max size of 10^7 -> bool
	                bool arr[10000000]; 

    Globally:
                // max size of 10^7 -> int, double, char 
                    int arr[10000000];
                
                // max size of 10^8 -> bool
                    bool arr[100000000]; 
                    

    Functions:  .fill(0)                            //fills the entire array with 0
                .at( )  or a[]                      //accessing a specific position and getting its value
                .front() or arr.at(0)               //will give the first element in the array
                .back()  or arr.at(arr.size()-1)    //will give the end element in the array
                .empty()                            //will tell if array is empty of not
                .size()                             //tells the number of elements in an array
                
    Iterators(addresses):   .begin()    //Starting point of the array the 0th element
                            .end()      //Address after the last element in the array which will be a null character
                            .rbegin()   //Ending point of the array 
                            .rend()     //Address before the beginning of the array which will be a null charcter
*/
#include<array> // C++ STL library for array<> name []{};

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int basic_array[3]{1,2,3};
    
    //STL style array which is based on the basic array but it gives us aditional functionality
    array<int,5> stl_style_array{1,2,3,4,0};          //if an array is defined globally with no values it will be initialized to zero if its defined inside main it will have garbage values. And if you have an array of size 5 but you initialize just first element to be of some value all the other values will be initialized to zero
    
                                   
    cout<<"Element at 2nd position in the array is-> "<<stl_style_array.at(2)<<endl;
    cout<<"Array Empty or not-> "<<stl_style_array.empty()<<endl;                       //.empty will give a bool output telling weather the given array is empty or not and also we cannot use basic_array here either only stl_style_array coz that is part of the array header class.
    cout<<"Array First Element-> "<<stl_style_array.front()<<endl;                      //will give first element of an array
    cout<<"Array Last Element-> "<<stl_style_array.back()<<endl;                        //will give last element of an array
    cout<<"Size of Array-> "<<stl_style_array.size()<<endl;                             //array.size will give the size of the array

    cout<<endl<<"____________Iterators___________"<<endl<<endl;

    cout<<".begin() Starting point of the array-> "<< stl_style_array.begin()<<endl;                 //we can use * to dereference this and we will get the value instead of the address
    cout<<".end() Address after the last element in the array-> "<< stl_style_array.end()<<endl;     //same as above
    cout<<".rbegin() Ending point of the array "<< *stl_style_array.rbegin()<<endl;                  //can use rbegin() only in dereference mode
    cout<<".rend() Address before the beginning of the array-> "<< *stl_style_array.rend()<<endl;    //can use rend() only in dereference mode only
    


    
    array<int, 5> arr = {1, 3, 4, 5, 6}; 
    //this will print the array
	for(auto it= arr.begin(); it!=arr.end(); it++) {
		cout << *it << " "; 
	}
    cout<<endl;

    //the below 2 will print the array in the reverse order
    for(auto it= arr.rbegin(); it>arr.rend(); it++) {    //can be > and >= both will work
		cout << *it << " ";
	}
    cout<<endl;

	for(auto it= arr.end() - 1; it>=arr.begin(); it--) {
		cout << *it << " "; 
	}
    cout<<endl;
    
    // for each loop 
	for(auto it: arr) {
		cout << it << " "; 
	}
    cout<<endl;

    //OG way of iteratting through an array but 
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }
    cout<<endl;
    
	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto c:s) {
		cout << c << " "; 
	}
    
}