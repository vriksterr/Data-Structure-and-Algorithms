// Q-https://leetcode.com/problems/group-anagrams/
// Video- https://www.youtube.com/watch?v=zX9k1XvVUXI
// Another reference https://leetcode.com/problems/group-anagrams/discuss/1749902/C%2B%2B-solution-using-soring-and-without-sorting-by-HashMap-with-time-complexity-analysis!

#include <bits/stdc++.h>
using namespace std;

/*
- Solution using HashMap with sorting.
- Here we store all same strings in a vector inside Hashmap.
- We’ll take every string from strs in temp then sort that by character. Push the main string to the map.
- Like these elements with the same character will push to the same vector of hashmap.
- Then push all the vectors from map to ans.
- Time complexity: O(n.klogk) /k is the length of string and n is the total no. of strings
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;

        for(int i{}; i<strs.size(); i++){
            string a = strs[i];
            sort(a.begin(), a.end());
            umap[a].push_back(strs[i]);
        }

        for(auto it{umap.begin()}; it != umap.end(); it++ ){
            ans.push_back((*it).second);
        }
        return ans;
    }
};

class Solution2 {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;

        for(auto x: strs){
            string temp = x;
            sort(x.begin(), x.end());
            umap[x].push_back(temp);
        }

        for(auto x : umap){
            ans.push_back(x.second);
        }
        return ans;
    }
};

int main(){

    vector<string> names{"eat","tea","tan","ate","nat","bat"};

    Solution a;

    a.groupAnagrams(names);


}