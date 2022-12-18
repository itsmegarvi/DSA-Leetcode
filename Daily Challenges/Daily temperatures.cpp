/*
Given an array of integers temperatures represents the daily temperatures, return an array answer
such that answer[i] is the number of days you have to wait after the ith day to get a warmer
temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

Example 1:
Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

.Example 2:
Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]

Example 3:
Input: temperatures = [30,60,90]
Output: [1,1,0]

Constraints:
1 <= temperatures.length <= 105
30 <= temperatures[i] <= 100
*/
string s = "Need to improve stack before getting this right. Will be back later";
cout << s << endl;
// Try 2 - Time limit exceeded
// ignored the case of no higher temperature for non-last elements of the vector
/*
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> vec;
        int count = 0;
        for(int i=0; i<temperatures.size();i++){
            if(i==temperatures.size()-1){
                vec.push_back(0);
                return vec;
            }
            count = 0;

            while(temperatures[i]>=temperatures[i+count]){
                count++;
                if(i+count==temperatures.size()){
                    count = 0;
                    break;
                }
            }

            vec.push_back(count);
        }
        return vec;
    }
};




*/

// Try 1 - Runtime error
/*
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> vec;
        int count = 0;
        for(int i=0; i<temperatures.size();i++){
            if(i==temperatures.size()-1){
                vec.push_back(0);
                return vec;
            }
            count = 0;

            while(temperatures[i]>=temperatures[i+count]){
                count++;
            }

            vec.push_back(count);
        }
        return vec;
    }
};
*/