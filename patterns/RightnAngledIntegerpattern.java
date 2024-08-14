public class RightnAngledIntegerpattern {
    /**
     * Geek is very fond of patterns. Once, his teacher gave him a  pattern to solve. He gave Geek an integer n and asked him to build a pattern.
     * <p>
     * Help Geek to build a pattern.
     * <p>
     * Example 1:
     * <p>
     * Input: 5
     * Output:
     * 1
     * 1 2
     * 1 2 3
     * 1 2 3 4
     * 1 2 3 4 5
     * Example 2:
     * <p>
     * Input: 3
     * Output:
     * 1
     * 1 2
     * 1 2 3
     * Your Task:
     * <p>
     * You don't need to input anything. Complete the function printTriangle() which takes an integer n  as the input parameter and prints the pattern.
     */

    void printTriangle(int n) {
        // code here
        String str = "";
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j <= i; j++) {
                if (j > 1) {
                    str += " ";
                }
                str += j;
            }
            System.out.println(str);
            str = "";
        }
    }
}
