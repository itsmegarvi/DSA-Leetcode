package patterns;

/**
 * Geek is very fond of patterns. Once, his teacher gave him a square pattern to solve. He gave Geek an integer n and asked him to build a pattern.
 *
 * Help Geek to build a square pattern with the help of *  such that each * is space-separated in each line.
 *
 * Example 1:
 *
 * Input:
 * n = 3
 * Output:
 * * * *
 * * * *
 * * * *
 * Example 2:
 *
 * Input:
 * n = 5
 * Output:
 * * * * * *
 * * * * * *
 * * * * * *
 * * * * * *
 * * * * * *
 * Your Task: You don't need to input anything. Complete the function printSquare() which takes  an integer n  as the input parameter and print the pattern.
 */

class SquarePattern {

    public void printSquare(int n) {
        String str = "";
        if (n == 1) {
            System.out.println("*");
            return;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                str += "* ";
            }
            str += "*";
            System.out.println(str);
            str = "";
        }
    }

    /**
     * Solution by gpt
     *
     *  public static void printSquare(int n) {
     *         // Create a single row of the pattern
     *         StringBuilder row = new StringBuilder();
     *         for (int i = 0; i < n; i++) {
     *             if (i > 0) {
     *                 row.append(" ");
     *             }
     *             row.append("*");
     *         }
     *
     *         // Print the row n times
     *         for (int i = 0; i < n; i++) {
     *             System.out.println(row.toString());
     *         }
     *     }
     */

}