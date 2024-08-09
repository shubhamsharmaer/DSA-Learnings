// NOTES: Min Time to Collect Garbage - 2391

// STEPS: Variables:

// STEPS: pickP, pickM, pickG: Count total pickups for 'P', 'M', and 'G'.
// STEPS: travP, travM, travG: Calculate total travel time for 'P', 'M', and 'G'.
// STEPS: lastP, lastM, lastG: Track the last appearance of 'P', 'M', and 'G' in the garbage vector.

// STEPS: Loop Through garbage:

// STEPS: For each garbage string, iterate through its characters.
// STEPS: Increment the respective pick counter (pickP, pickM, pickG).
// STEPS: Update the last appearance index (lastP, lastM, lastG).

// STEPS: Calculate Travel Times:

// STEPS: Sum the travel times up to the last appearance index for 'P', 'M', and 'G'.
// STEPS: Use the travel vector to accumulate the travel times.

// STEPS: Total Time Calculation:

// STEPS: Add up all pick and travel times to get the total time.
// STEPS: Return totaltime

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // take 3 pictime 
        int pickP = 0;
        int pickM = 0;
        int pickG = 0;

        // take 3 travel time
        int travP = 0;
        int travM = 0;
        int travG = 0;

        // take 3 last apperance of P,M,G in garbage
        int lastP = 0;
        int lastM = 0;
        int lastG = 0;

        // loop for garbage
        for(int i = 0; i< garbage.size(); i++){
            string curr = garbage[i];

            for(int j = 0; j < curr.length(); j++){
                char ch = curr[j];
                if(ch == 'P'){
                    // count pick time
                    pickP++;
                    // count last apperance
                    lastP = i;
                }
                else if(ch == 'M'){
                    pickM++;
                    lastM = i;
                }
                else if(ch == 'G'){
                    pickG++;
                    lastG = i;
                }
            }
        } 

        // cal travel time
        for(int i = 0; i < lastP; i++){
            travP += travel[i];
        }
        for(int i = 0; i < lastM; i++){
            travM += travel[i];
        }
        for(int i = 0; i < lastG; i++){
            travG += travel[i];
        }

        int totaltime = pickP + pickM + pickG + travP + travM + travG;
        return totaltime;
    }
};