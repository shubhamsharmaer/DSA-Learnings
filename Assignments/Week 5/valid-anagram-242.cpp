// NOTES: Valid Anagram - 242

// STEPS: Sort the strings and return by comparing them

class Solution {
public:
    bool isAnagram(string s, string t) {

        // Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // Compare the sorted strings
        return s == t;
    }
};