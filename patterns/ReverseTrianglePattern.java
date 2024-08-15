public class ReverseTrianglePattern {

    /*
     *Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Geek an integer n and asked him to build a pattern.

Help Geek to build a pattern.



Example 1:

Input: 5

Output:

*********
 *******
  *****
   ***
    *

Your Task:

You don't need to input anything. Complete the function printTriangle() which takes  an integer n  as the input parameter and print the pattern.
     */

    void printTriangle(int n) {
        // code here
        String str = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                str += " ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
                str += "*";
            }
            System.out.println(str);
            str = "";
        }
    }
}
