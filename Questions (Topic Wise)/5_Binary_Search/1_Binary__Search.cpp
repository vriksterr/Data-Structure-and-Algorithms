//Q- https://leetcode.com/problems/binary-search/

#include <bits/stdc++.h>
using namespace std;

/*
    Given sorted int array, search for a target value
    Ex. nums = [-1,0,3,5,9,12], target = 9 -> 4 (index)

    Since array is sorted, perform binary search

    Time: O(log n)
    Space: O(1)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;   // reason for adding low https://www.quora.com/Why-in-binary-search-mid-point-is-calculated-this-way
            if (nums[mid] < target) {
                low = mid + 1;      //new low will be 
            } else if (nums[mid] > target) {
                high = mid - 1;     //new high will be 
            } else {
                return mid;
            }
        }
        
        return -1;
    }
};

//My solution but self implement binary search
class Solution2 {
public:
    int search(vector<int>& nums, int target) {
        
        bool ans = binary_search(nums.begin(),nums.end(),target);
        int r;
        
        // if(nums[0] < 0){nums[0] * -1;}
        if(ans == true){
            auto it = find(nums.begin(),nums.end(),target); 
            r = nums.begin() - it;
            
            //if the r is negative coz the first element is negative
            if(r<0){r = r * -1;}
        }
        else{return -1;}
        return r;
    }
};

//My Solution without even using Binary Search Algorithm
class Solution3 {
public:
    int search(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==target){
                return i;
            }
        }
        return -1;
    }
};

int main(){

    vector<int> array{2,1,5,3};
    int target1{4};
    cout<<"Please enter the target you want to search: ";
    // cin>>target1;

    Solution a;
    a.search(array,target1);

}