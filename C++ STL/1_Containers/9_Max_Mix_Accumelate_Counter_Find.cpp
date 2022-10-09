#include <bits/stdc++.h>
using namespace std;

int main(){

/*
    ***********************
    * Max and Min finding *
    ***********************
*/
    vector<int>w{1,2,3,4,5,6,7,8};
    
    //gives the maximum eliment
    int max = *max_element(w.begin(),w.end());   //without * will return an iterator
    //gives the main eliment
    int min = *min_element(w.begin(),w.end());   //gives the min eliment

/*
    **************
    * Accumulate *
    **************
*/
    vector<int>w2{1,2,3,4,5,6,7,8};

    int sum = accumulate(w2.begin(),w2.end(),0);      //here 0 is the initial sum and thats where the adition will start from we can put an i in its place as well

/*
    ***********
    * Counter *
    ***********
*/
    vector<int>w3{1,2,1,5,3,4,7,6,2,3,4,5,6,7,8,3,3,2,2,2,2};
    int x;
    cout<<"What element you want to count ";
    cin>>x;
    int cnt = count(w3.begin(),w3.end(),x);       // this will tell how many  times an element was present in an array/vector
    cout<<x<<" is present-> "<<cnt<<" times"<<endl;

/*
    ********
    * Find *
    ********
    -find is an iterator
    -once we get an address stored in  it we can minus the .begin to get the index of the element
*/
    vector<int>w4{1,2,1,5,3,4,7,6,2,3,4,5,6,7,8,3,3,2,2,2,2};
    cout<<"What element you want the first index for ";
    int x2;
    cin>>x2;
    auto it = find(w4.begin(),w4.end(),x2);      //this will return the index of x2 when it first appeared in the array
    int position = w4.begin() - it;
    cout<<x2<<" first showed at this index-> "<<position<<endl;


}