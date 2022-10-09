// Questions- https://leetcode.com/problems/two-sum/
// Explanation https://www.youtube.com/watch?v=7jDS9KQEDbI

/*
    Given int array & target, return indices of 2 nums that add to target
    Ex. nums = [2,7,11,15] & target = 9 -> [0,1], 2 + 7 = 9

    At each num, calculate complement, if exists in hash map then return

    Time: O(n)
    Space: O(n)
*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

//O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hashmap;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            //seeing if compliment exist in hashmap
            if (hashmap.find(complement) != hashmap.end()) {
                //if it dose we have our indexes as answer
                result.push_back(hashmap.at(complement));
                result.push_back(i);
                break;
            } 
            else {
                //if it dosent we add it to the hashmap
                hashmap.insert({nums[i], i});
            }
        }
        return result;
    }
};

//O(n^2)
class Solution2 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
      
        vector<int> result;
        for(int i{}; i<nums.size(); i++){
            for(int j{i+1}; j<nums.size();j++){
                if((nums[i]+nums[j]) == target){
                    
                    result.push_back(i);
                    result.push_back(j);

                    //Printing dont add this to leetcode
                    cout<<endl<<"The result is: [";
                    for(int i{}; i<result.size(); i++){
                        cout<<result.at(i)<<", ";
                    }
                    cout<<"]"<<endl;
                    //Printing over
                    return result;
                }
            }
        }
        return result;
    }
    
};

// if we had to return the values that add up to target instead of the index values
class Solution3 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hashmap;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            int current_nums =nums[i];
            //seeing if compliment exist in hashmap
            if (hashmap.find(complement) != hashmap.end()) {

                for(auto it= hashmap.begin(); it != hashmap.end(); i++){
                        result.push_back((*it).first);
                        result.push_back(current_nums);
                        break;
                }
            }
            else{
                //if it dosent we add it to the hashmap
                hashmap.insert({nums[i], i});
            }
        }
        
        return result;
    }
};


int main(){

    vector<int> array{2,1,5,3};
    int target{7};
    // cout<<"Please enter the target you want to search: ";
    // cin>>target1;

    Solution a;
    a.twoSum(array,target);

    vector<int> values = a.twoSum(array,target);
    

    //values at those indexes
    for(auto x:a.twoSum(array,target)){     // this can be done via normal for(int i;i<__;i++)
        // cout<<x<<",";

        cout<<array.at(x);
    }
    cout<<endl;

    //indexes
    for(int i=0; i<values.size(); i++){
        cout<<values.at(i);
    }
}