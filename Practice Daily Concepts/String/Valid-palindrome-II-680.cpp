// NOTES: Valid Palindrome II - 680

// STEPS: Approach

// STEPS: Define the Function: bool validPalindrome(string s)

// STEPS: Two-Pointer Technique:

// STEPS: Use two pointers to check for palindrome properties: int i = 0; int j = s.length() - 1;
// STEPS: Check for Palindrome:

// STEPS: While i < j:
// STEPS:  -> If characters at s[i] and s[j] are equal:
// STEPS:   -- Move the pointers inward: i++ and j--
// STEPS:  -> If characters are not equal:
// STEPS:   -- Use a helper function to check if removing one character can result in a palindrome.
// STEPS:  -> Helper Function: bool isPossiblesol(string s, int idx)

// STEPS: Remove the character at index idx using s.erase(idx, 1).
// STEPS: Check if the resulting string is a palindrome:
// STEPS: Initialize two pointers: int start = 0; int end = s.length() - 1;
// STEPS: While start < end:
// STEPS:  -> If characters at s[start] and s[end] are equal:
// STEPS:   -- Move the pointers inward: start++ and end--
// STEPS:  -> If characters are not equal, return false.
// STEPS:   -- Return true if the entire string is a palindrome.
// STEPS: Determine Result:

// STEPS: If the string is already a palindrome, return true.
// STEPS: If not, check the two cases where one character is removed:
// STEPS: Remove character at i: isPossiblesol(s, i)
// STEPS: Remove character at j: isPossiblesol(s, j)
// STEPS: Return true if either case results in a palindrome; otherwise, return false.


class Solution {
public:

    // Love babbar bhaiya predicate fun
    // bool checkpalindrome(string s, int i, int j){
    //     while(i <= j){
    //         if(s[i] != s[j]){
    //             return false;
    //             // j--;
    //         }
    //         else{
    //             i++;
    //             j--;
    //         }
    //     }
    //     return true;
    // }
    // mera predicate fun
    bool isPossiblesol(string s, int idx){
        s.erase(idx, 1);
        int start = 0;
        int end = s.length()-1;

        while(start < end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        // check for palindrome
        int i = 0;
        int j = s.length()-1;

        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else if(s[i] != s[j]){
                // Love babbar bhaiya solution
                
                // bool ans1 = checkpalindrome(s, i+1, j);
                // bool ans2 = checkpalindrome(s, i, j-1);
                // return ans1 || ans2;
                
                // Mera solution
                if(isPossiblesol(s, i) || isPossiblesol(s, j)){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};