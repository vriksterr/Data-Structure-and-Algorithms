#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        int start_pointer{0};
        int end_pointer = s.size()-1;
        
        for(int i{start_pointer}, j{end_pointer}; i<j; i++,j--){    // Move 2 pointers from each end until they collide
                    while( !isalnum(s[i]) && i < j){    // Increment left pointer if not alphanumeric
                        i++;
                    }
                    while( !isalnum(s[j]) && i < j){    // Decrement right pointer if no alphanumeric
                        j--;
                    }

                    //comparision stage
                    if( tolower(s[i]) != tolower(s[j]) ){   // Exit and return error if not match
                        return false;
                    }
         }
        return true;
    }
};

int main(){

    string p{"A man, a plan, a canal: Panama"};

    Solution a;

    a.isPalindrome(p);
}