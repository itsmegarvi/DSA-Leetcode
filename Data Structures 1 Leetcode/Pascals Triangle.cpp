/*
    Given an integer numRows, return the first numRows of Pascal's triangle.

    In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

    Example 1:
    Input: numRows = 5
    Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

    Example 2:
    Input: numRows = 1
    Output: [[1]]

    Constraints:
    1 <= numRows <= 30
*/
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> vec;
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> v;
            int c = 1;
            for (int j = 1; j <= i; j++)
            {
                v.push_back(c);
                c = c * (i - j) / j;
            }

            vec.push_back(v);
        }

        return vec;
    }
}; // Time Complexity O(n^2)

/*  Failure 1, Took the progression as 11**n but didnt considered double digit integers.
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            int n = pow(11,i);
            while(n!=0){
                v.push_back(n%10);
                n/=10;
            }
            vec.push_back(v);
        }

        return vec;
    }
};
*/