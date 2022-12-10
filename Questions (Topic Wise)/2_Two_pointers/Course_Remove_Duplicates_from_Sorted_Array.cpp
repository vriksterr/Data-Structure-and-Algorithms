// Q- https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Video Ans- https://www.youtube.com/watch?v=Fm_p9lJ4Z_8

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0) return 0;

        int i = 0;

        for(int j = 0; j < nums.size(); ++j) {
            if(nums[j]!= nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
            return i+1;
    }
};