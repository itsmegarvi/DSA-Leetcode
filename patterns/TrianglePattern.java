public class TrianglePattern {

    /*
     *Geek is very fond of patterns. Once, his teacher gave him a pattern to solve. He gave Ram an integer n and asked him to build a pattern.
Help Ram build a pattern.

Example 1:

Input: 5
Output:
    *
   ***
  *****
 *******
*********
Example 2:

Input: 3
Output:
  *
 ***
*****
Your Task:
You don't need to input anything. Complete the function printTriangle() which takes an integer n  as the input parameter and prints the pattern.
     */

    void printTriangle(int n) {
        String str = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                str += " ";
            }
            for (int j = 0; j <= 2 * i; j++) {
                str += "*";
            }
            System.out.println(str);
            str = "";
        }

    }
}
