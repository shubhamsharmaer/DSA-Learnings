// NOTES: Custome sort string - 791

// STEPS: Define the Function: string customSortString(string order, string s)

// STEPS: Global String Declaration:

// STEPS: static string str; is declared as a static global string within the Solution class to store the custom order string (order) for use in the comparator function.
// STEPS: Custom Comparator Function:

// STEPS: The compare function is defined to compare two characters c1 and c2.
// STEPS: It returns true if the position of c1 in the str (custom order) is less than the position of c2. This ensures that characters in s are sorted according to the order specified in order.
// STEPS: When compare returns true, c1 is placed before c2 in the final sorted string.

// STEPS: Sorting Logic:

// STEPS: customSortString function is the main function that sorts string s based on the order defined in order.
// STEPS: str is assigned the value of order.
// STEPS: sort(s.begin(), s.end(), compare); sorts the string s using the custom comparator function.
// STEPS: The sorted string s is then returned.

// STEPS: Usage of static:

// STEPS: The str variable is static to ensure it retains its value across multiple calls to the compare function during sorting.
// STEPS: Final Output: return s;

class Solution {
public:
    // global string for access
    static string str;
    static bool compare(char c1, char c2){
        // return true if pos of c1 is before or less than c2
        // when retunr true, c1 will be place before c2 in s string
        return (str.find(c1) < str.find(c2));
    }
    string customSortString(string order, string s) {
        // sort the string
        str = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};

string Solution::str;