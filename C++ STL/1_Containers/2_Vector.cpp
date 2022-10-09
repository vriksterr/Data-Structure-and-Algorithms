/*
    **********
    * Vector *
    **********

    Vector is build upon array but the the speciality it is dynamic that means we can add endless 
    elements without wooring about the size.

    Note each time the vector fills up the size of vector doubles each time we add a new element.

    Also it has the same memory limitations as the array in main and global

    Functions:      .push_back()
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

#include<vector>
#include<iostream>
using namespace std;

int main(){

    vector<int>v;
    vector<int>x(5,0);                              //meaning that the size of the vector is 5 and all the elements will be initialized to 0
    vector<int>w{2,3,5,3,8,7,0,9};               
    vector<int>copy_vector(w.begin(),w.end());      //makies a copy of vector w to a new vector names copy_vector we can choose a range like below
    vector<int>copy_vector2(w.begin(),w.begin()+2); //{2,3,5}
    vector<int>copy_vector3(w);                     //copying entire w vector to new vector
    
 //Insertion
    
    v.push_back(1);     //adds an element at the end of the vector
    v.push_back(2);     //v.emplace_back(2); works the same way as push_back but emplace_back is way faster for Competative Programming
    v.push_back(3);

//Deletion
    v.pop_back();   //removes the last element in the vector
    w.erase(w.begin());
    // v.clear();      //empties the vector ie all the elements are removed from the vector but the capacity remains unchanged

    cout<<"Element at 2nd Index-> "<<v.at(2)<<endl;
    cout<<"Vector Empty or not-> "<<v.empty()<<endl;   //.empty will give a bool output telling weather the given Vector is empty or not.
    cout<<"Vector First Element-> "<<v.front()<<endl;  //will give first element of an Vector
    cout<<"Vector Last Element-> "<<v.back()<<endl;    //will give last element of an Vector
    cout<<"Capacity-> "<<v.capacity()<<endl;         //tells the capacity of the vector. it will double each time we add a new element when it fills up (basically tells how much space/memory available for elements to be added)
    cout<<"Size-> "<<v.size()<<endl;                 //will tell the size of the array (basically how many elements are there)

    
    cout<<endl<<"____________Iterators___________"<<endl<<endl;

    //begin() end() rbegin() and rend() wont print directly look into it some operator overloading might be required

    //output of a vector
    for(int i{}; i<v.size(); i++){
        cout<<v.at(i)<<", ";
    }
    cout<<endl;

    //lower bound, upped bound in algo
    
    swap(v,x);  //swaps the 2 vectors

    
    
    
    cout<<endl<<"____________2D Vector___________"<<endl<<endl;
    // Watch from time: https://youtu.be/iOOzYwBeXIM?t=3972

    // to defining 2d vectors 
 
	vector<vector<int>> vec; 
 
	vector<int> raj1;
	raj1.push_back(1); 
	raj1.push_back(2); 
 
	vector<int> raj2;
	raj2.push_back(10); 
	raj2.push_back(20); 
 
	vector<int> raj3;
	raj3.push_back(19); 
	raj3.push_back(24); 
	raj3.push_back(27); 
 
	vec.push_back(raj1); 
	vec.push_back(raj2); 
	vec.push_back(raj3); 
    
    // it is vector itself 
	for(auto vctr: vec) {
		for(auto it: vctr) {
			cout << it << " "; 
		}
		cout << endl; 
	}
 
 
	for(int i = 0;i<vec.size();i++) {
		for(int j = 0;j<vec[i].size();j++) {
			cout <<  vec[i][j] << " "; 
		}
		cout << endl; 
	}
 
 
	// define 10 x 20 meaning at all the 10 positions ther will be a vector of size 20 with all values initialized to 0
	vector<vector<int>> vec(10, vector<int> (20, 0)); 
	vec.push_back(vector<int>(20, 0)); 
	cout << vec.size() << endl; // 11 prints
 
	vec[2].push_back(1); 
 
 
	vector<int> arr[4]; 
	arr[1].push_back(0); 
 
 
	// 10 x 20 x 30 // int arr[10][20][30] 
    //syntax error
	// vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20, vector<int> (30, 0));)

      cout<<endl<<"____________3D Vector___________"<<endl<<endl;
      cout<<"Read the referred link"<<endl;
    //https://slaystudy.com/initialize-3d-vector-in-c/
}