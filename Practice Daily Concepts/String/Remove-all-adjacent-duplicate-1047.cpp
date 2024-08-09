// NOTES:  Remove all adjacent duplicate characters - 1047

// STEPS: Define the Function: string removeDuplicates(string s)
// STEPS: Initialize an Empty String:
// STEPS:  -> string ans = ""; (This will store the final result after removing duplicates)
// STEPS: Index Initialization:
// STEPS:  -> int index = 0; (Start from the beginning of the string s)
// STEPS: Iterate Through the String:
// STEPS:  -> While index < s.length():
// STEPS:  -> Check for Consecutive Duplicates:
// STEPS:  -> If the last character in ans is the same as the current character in s (ans[ans.length()-1] == s[index]):
// STEPS:       -> Pop Operation: Remove the last character from ans (ans.pop_back();)
// STEPS:  -> Else:
// STEPS:       -> Push Operation: Add the current character to ans (ans.push_back(s[index]);)
// STEPS:  -> Increment the index (index++)
// STEPS: Return the Result:
// STEPS: Return ans (The modified string without consecutive duplicates)

class Solution {
public:
    string removeDuplicates(string s) {
        // create a ans string 
        string ans = "";
        // an index
        int index = 0;

        while(index < s.length()) {
            // check for same
            if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
                // pop from ans
                ans.pop_back();
            }
            else{
                // push in ans
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};