/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
*/

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
}; // runtime 19ms; memory 7.4 mb

// I am really really dumb sometimes

/* Try 1 - utter failure
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        //vector<char> vec(s.begin(),s.end());
        //vector<char> vec2(t.begin(),t.end());
        unordered_map<char, int> m;
        unordered_map<char, int> n;
        bool st;
        for(int i=0;i<s[i];i++){
            //st = (m.find(s[i] == m.end());
            if(m.contains([s[i]])){
                m.insert(make_pair(s[i],1));
            }
            else{
                m[s[i]]++;
            }
            st = n.find(t[i] == n.end();
            if(st)){
                n.insert(make_pair(t[i],1));
            }
            else{
                n[t[i]]++;
            }
        }

        return not (n!=m);
    }
};
*/