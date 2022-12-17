/*
    Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1

Constraints:
1 <= s.length <= 105
s consists of only lowercase English letters.
*/

// First try (TLE error)

/*
class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> vec(s.begin(),s.end());
        int n =vec.size();
        for(int i=0;i<vec.size();i++){
            if (count(vec.begin(),vec.end(),vec[i]) == 1){
                return i;
            }
        }

        return -1;
    }
};
*/

// Solution Try 2

// Runtime  67ms and Memory 11.8mb

class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<char> vec(s.begin(), s.end());
        unordered_set<char> sc;
        int n = vec.size();
        for (int i = 0; i < vec.size(); i++)
        {
            if (sc.find(vec[i]) == sc.end())
            {
                if (count(vec.begin() + i, vec.end(), vec[i]) == 1)
                {
                    return i;
                }
                else
                {
                    sc.insert(vec[i]);
                }
            }
        }

        return -1;
    }
};
