/*

    In insertion Sort we are comparing the values and arranging it in accending order or decending
    order by comparing the 2 values and if the value is found to be smaller than the previous value
    we keep replacing positions and that smaller is in the right position

    There are 2 types of Insertion Sort
    1) Stable - where the order dosent change if there its like 2,3,4,4
    2) Unstable - where the last 4 can come before the first 4 even tho they both are same its
                  a waste of time and will be counted in a unstable sort
*/
#include <vector>

using std::vector;

vector<int> insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int j = i - 1;
        while (j >= 0 && arr[j + 1] < arr[j]) {
            int tmp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
    return arr;
}