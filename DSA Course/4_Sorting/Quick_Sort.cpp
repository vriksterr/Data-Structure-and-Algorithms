/*
    It is another sorting algorithm that is similar to merge sort algorithm, the idea is 
    instead of splitting the array into 2 almost equal parts and sorting those halfs like we 
    do in merge sort, instead we are going to pick a random value or the rightmost value 
    which is called the pivot value, using this pivot value we are going to itterate through
    everysingle value in the array and compare these values with the pivot value except itself,
    so every value which is going to be less than or equal to the pivot value is going to be
    put into the left partition or the array and the bigger ones will be on the right side.

    We will keep on doing it until everything is sorted using recursion.
*/

#include <vector>
using std::vector;

vector<int> quickSort(vector<int>& arr, int s, int e) {
    if (e - s + 1 <= 1) {
        return arr;
    }

    int pivot = arr[e];
    int left = s; // pointer for left side

    // Partition: elements smaller than pivot on the left side.
    for (int i = s; i < e; i++) {
        if (arr[i] < pivot) {
            int tmp = arr[left];
            arr[left] = arr[i];
            arr[i] = tmp;
            left++;
        }
    }
    // Move pivot in-between left & right sides
    arr[e] = arr[left];
    arr[left] = pivot;
    
    // Quick sort left side
    quickSort(arr, s, left - 1);

    // Quick sort right side
    quickSort(arr, left + 1, e);
 
    return arr;
}