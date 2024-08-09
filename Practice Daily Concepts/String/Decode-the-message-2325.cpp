// NOTES: Decode the Message - 2325

// STEPS: Mapping Creation:

// STEPS: Start with the letter 'a'.
// STEPS: Use a map array to store mappings from the key to letters of the alphabet.
// STEPS: For each character in the key:
// STEPS: Skip if it's a space (ch != ' ').
// STEPS: If it's not mapped yet (map[ch] == 0), map it to the current letter and increment the letter.

// STEPS: Decoding Process:

// STEPS: Traverse the message string.
// STEPS: For each character:
// STEPS: If it's a space, add a space to the result.
// STEPS: Otherwise, replace it with the corresponding mapped character from the map.
// STEPS: Return: The decoded message as a string.

class Solution {
public:
    string decodeMessage(string key, string message) {
        // create mapping
        char start = 'a';
        char map[280] = {0};

        for(auto ch:key){
            // check for ' ' empty space 
            // if(map[ch] != ' ')
            // & if a char is mapped prev or not
            // if(map[ch] == 0)

            if(ch != ' ' && map[ch] == 0){
                map[ch] = start;
                start++;
            }
        }

        // use mapping
        string ans;

        // travers on map string
        for(auto ch: message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else{
                char decoded = map[ch];
                ans.push_back(decoded);
            }
        }
        return ans;
    }
};