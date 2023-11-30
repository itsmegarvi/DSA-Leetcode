"""
    Given an integer x,
    return true if x is a
        palindrome,
    and false otherwise.

        Example 1 :

    Input : x = 121 Output : true Explanation : 121 reads as 121 from left to right and from right to left.Example 2 :

    Input : x = -121 Output : false
    Explanation : From left to right,
            it reads - 121. From right to left, it becomes 121 -.Therefore it is not a palindrome.Example 3 :

    Input : x = 10 Output : false
    Explanation : Reads 01 from right to left.Therefore it is not a palindrome.

 Constraints :    -231 <= x <= 231 - 1

 Follow up : Could you solve it without converting the integer to a string ?
"""

class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        long num = x;
        long newNum = 0;
        while (num > 0)
        {
            newNum = newNum * 10 + num % 10;
            num /= 10;
        }
        return newNum == x;
    }
};

// runtime 15ms(beats 20.29%) and memory 6.21mb(beats Beats 74.87% %)

//Alternate solution 

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 ||(x!=0 && x%10 == 0)){
            return false;
        }
        int reversed = 0;
        while(x > reversed){
            reversed = reversed*10 + x%10;
            x /= 10;
        }
        return (x==reversed) || (x == reversed/10);
    }
};

// runtime 7ms(beats 72.05%) and memory 6.33mb(beats Beats 39.87% %)
