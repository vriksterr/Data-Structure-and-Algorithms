//  Questions- https://leetcode.com/problems/valid-anagram/

/*
    Given 2 strings, return true if anagrams (same letters diff order)
    Ex. s = "anagram" & t = "nagaram" -> true, s = "rat" & t = "car" -> false

    Count chars, strings should have same # of chars if anagram

    Time: O(n)
    Space: O(26)
*/

//Video Explanation= https://www.youtube.com/watch?v=IRN1VcA8CGc


#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

         //checking to see of the 2 strings size are same or not if not ans is false
        if(s.size() != t.size()) return false;
        
        vector<int> counter(26,0);

         //here we are incrementing and increasing the number at counter position 
        for(int i = 0 ; i < s.size(); i++){
            counter[s[i] - 'a']++;      // we can do it because of ASCII Table read here: https://medium.com/swlh/what-does-subtracting-a-char-from-a-char-mean-79da714c1b3b and null is 0 so 'a' - 0 = 97
            counter[t[i] - 'a']--;
        }

        //and checking here if counter elements is anything but 0
        for(int j{}; j < counter.size(); j++) if(counter[j] != 0) return false;
        return true;
    }
};

//same as solution 1 but we are looping 2wice first we are ++ in one loop and then -- in second loop long code but still O(N)
class Solution2 {
public:
    bool isAnagram(string s, string t) {

       
        if (s.size() != t.size()) {
            return false;
        }
        
       
        vector<int> counter(26,0);      
        
       
        for (int i = 0; i < s.size(); i++) {
            counter[s[i] - 'a']++;              
        }
        
        //here we are decrementing the total counter
        for (int j = 0; j < t.size(); j++) {
            counter[t[j] - 'a']--;
            if (counter[t[j] - 'a'] < 0) {      //and checking here if it goes below 0
                return false;
            }
        }
        return true;
    }
};

//same as above but cleaner approach (USE THIS)
class Solution3 {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        int count[26]{0};

        for(int i = 0 ; i < s.size(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int i : count) if(i != 0 ) return false;
        return true;
    }
};

//Using Unordered Map O(log n)
class Solution4 {
public:
    bool isAnagram(string s, string t) {

        int length=s.size();

	unordered_map<char, int> m;
	if (s.size() != t.size()) {
		return false;
	}
	for (int i = 0; i < length; i++) {
		m[s[i]]++;          // can also be writter as m.at(s[i])++;

	}

	for (int i = 0; i < length; i++) {
		if (m.find(t[i]) == m.end()) {
			return false;
		}
		else {
			m[t[i]]--;
			if (m[t[i]] < 0) {
				return false;
			}
		}
	}
	return true;
    }
};

//another same as above but slightly different style
class Solution5 {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        if(n!=t.length())return false;
        vector<int>c1(26,0);
         vector<int>c2(26,0);
        for(int i=0;i<n;i++){
            c1[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            c2[t[i]-'a']++;
        }
        if(c1!=c2)return false;
        return true;
        
    }
};

//we can also use sorting but that is not going to be O(n2) coz of sorting algo
class Solution6 {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if (s != t){
          return false;
        }

        return true;
    }
};


int main(){

    string one{"anagram"};
    string two{"nagaram"};
    Solution a;

    cout<<"The two strings are anaragram yes(1) & no(0): "<<a.isAnagram(one,two)<<endl;
    
}