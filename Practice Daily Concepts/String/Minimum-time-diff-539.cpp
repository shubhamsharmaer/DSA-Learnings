// NOTES: Minimum time difference - 539

// STEPS: Steps:

// STEPS: 1. Function to Convert Time:

// STEPS: -> Function: int timeToMinutes(string &time)
// STEPS: -> Logic:
// STEPS:        hours = stoi(time.substr(0, 2));
// STEPS:        minutes = stoi(time.substr(3, 2));
// STEPS:        Convert to total minutes: return hours * 60 + minutes;

// STEPS: 2. Initialize a Timeline:

// STEPS: -> Vector: vector<int> timeline;
// STEPS: -> Logic: For every time in timePoints, convert and push to timeline using timeToMinutes.

// STEPS: 3. Sort the Timeline:

// STEPS: -> Sort: sort(timeline.begin(), timeline.end());

// STEPS: 4. Find Minimum Difference:

// STEPS: -> Initialize: int ans = INT_MAX;
// STEPS: -> Loop: For every i from 1 to timeline.size() - 1, calculate:
// STEPS:        ans = min(ans, timeline[i] - timeline[i - 1]);

// STEPS: 5. Edge Case Handling:

// STEPS: -> Handle Midnight Wrap-around:
// STEPS:    Case without adding 0th time point (Incorrect):
// STEPS:        Could fail for cases like ["12:12", "00:13"].
// STEPS: -> Correct Handling:
// STEPS:    Calculate: int lastdiff = timeline[0] + 1440 - timeline[timeline.size()-1];
// STEPS:    Update ans = min(ans, lastdiff);

// STEPS: 6. Return Result:

// STEPS: Return ans (minimum time difference in minutes).

class Solution {
public:

    int timeToMinutes(string &time) {
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        return hours * 60 + minutes;
    }
    int findMinDifference(vector<string>& timePoints) {
        // substr fun -> hrs and min fetch krna
        // int size = sizeof(timePoints) / sizeof(timePoints[0]);
        vector<int> timeline;
        int ans = INT_MAX;
        for(auto time:timePoints)
            timeline.push_back(timeToMinutes(time));
            
            // now sort the timeline and take min diff b/w int
            sort(timeline.begin(), timeline.end());
            for(int i = 1; i < timeline.size(); i++)
                ans = min(ans, timeline[i] - timeline[i - 1]);
           
            // ****** EDGE CASES ******
            // CASE 1 -> Without adding [0] int
            // hamara kush cases ma galat ans ayega
            // ex -> ["12:12", "00:13"] 
            // Expected -> 719 | OP -> 708
            // Reason -> Kyu ki humne 1440 ma se minus krdiya jbki hame 1440 + [0] int se 
            // minus krna tha 
            // int lastdiff = 1440 - timeline[timeline.size()-1];

            // ------------------------------- //
            
            // CASE 2 -> With [0] int
            // Isse hamare sare test pases ho jayege
            int lastdiff = timeline[0] + 1440 - timeline[timeline.size()-1];
            ans = min(ans, lastdiff);
        return ans;
    }
};