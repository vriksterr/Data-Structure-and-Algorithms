/*
    The main idea with merge sort is to solve a big sorting problem 
    into small sub problems by taking the input array and split it into 
    2 aproximatly equal halfs, and those halfs split them into aproxx halfs 
    and then contunue to split each subarray untill we cannot split them anymore
    which means we have individual elements left of us to then sort.

    We do this with the help of recurssion.
*/

#include <vector>

using std::vector;

void merge(vector<int>& arr, int s, int m, int e) {
    // Copy the sorted left & right halfs to temp arrays
    vector<int> L = {arr.begin() + s, arr.begin() + m + 1};
    vector<int> R = {arr.begin() + m + 1, arr.begin() + e + 1}; 

    int i = 0; // index for L
    int j = 0; // index for R
    int k = s; // index for arr

    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]) {
            arr[k] = L[i++];
        } else {
            arr[k] = R[j++];
        }
        k++;
    }

    // One of the halfs will have elements remaining
    while (i < L.size()) {
        arr[k++] = L[i++];
    }
    while (j < R.size()) {
        arr[k++] = R[j++];
    }
}

vector<int> mergeSort(vector<int>& arr, int s, int e) {
    if (e - s + 1 <= 1) {
        return arr;
    }
    // The middle index of the array
    int m = (s + e)  / 2;

    // Sort the left half
    mergeSort(arr, s, m);

    // Sort the right half
    mergeSort(arr, m + 1, e);

    // Merge sorted halfs
    merge(arr, s, m, e);
    
    return arr;
}