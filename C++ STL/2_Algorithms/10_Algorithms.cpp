/*
    **************
    * Algorithms *
    **************

    Lowerbound
    uppedbound
    binary search
    max element
    sort
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //Binary Search (items have to be in sorted order)
    cout << "Finding 6-> " << binary_search(v.begin(), v.end(), 6) << endl;
    
    
    cout << "lower bound-> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Uppper bound-> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    
    int a = 3;
    int b = 5;
    //finding minimum and maximum
    cout << "max -> " << max(a, b);
    cout << "min -> " << min(a, b);
    
    //Swap
    swap(a, b);
    cout << endl<< "a-> " << a << endl;

    //Reverse
    string abcd = "abcd"; 
    reverse(abcd.begin(), abcd.end());
    cout<<"string->"<<abcd<<endl;

    //Rotate
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}