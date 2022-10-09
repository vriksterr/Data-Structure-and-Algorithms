/*
    *****************
    * Binary Search *
    *****************

    -Binary Search only returns a bool which is true or false ( tells weater the element is present or not)
    -O(log n)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vector{1,2,3,4,5};
    // binary_search(first_iterator, last_iterator, x)

    int ans = binary_search(vector.begin(),vector.end(),1);
    bool ans2 = binary_search(vector.begin(),vector.end(),6);


    cout<<"Is 1 present in vector? -> "<<ans<<endl;
    cout<<"Is 6 present in vector? -> "<<ans2<<endl;

}