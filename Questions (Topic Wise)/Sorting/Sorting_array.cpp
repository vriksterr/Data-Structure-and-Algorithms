// more other solutions
// https://leetcode.com/problems/sort-an-array/discuss/1401412/C%2B%2B-Clean-Code-Solution-or-Fastest-or-All-(15%2B)-Sorting-Methods-or-Detailed

#include<vector>
#include<algorithm>
using std::vector;

// solution works but time limits exceeds on large values look for more better solution
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i = 1; i<nums.size();i++){
            int j = i-1;
            while(j>=0 && nums[j+1] < nums[j]){
                int temp = nums[j];
                nums[j]= nums[j+1];
                nums[j+1] = temp;
                j--;
            }
        }
        return nums;
    }
};

//Solution passes and the most simple using the algorithm library, i would suggest do without it
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};