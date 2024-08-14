public class RightAngledTrianglePattern {
    /**
     * Geek is very fond of patterns. Once, his teacher gave him a pattern of triangle to solve. He gave Geek an integer n and asked him to build a pattern.
     * <p>
     * Help Geek to build a triangle pattern using stars(*).
     * <p>
     * <p>
     * <p>
     * Example 1:
     * <p>
     * Input:
     * n = 5
     * Output:
     * *
     * * *
     * * * *
     * * * * *
     * * * * * *
     * Example 2:
     * <p>
     * Input:
     * n = 6
     * Output:
     * *
     * * *
     * * * *
     * * * * *
     * * * * * *
     * * * * * * *
     * Your Task:
     * You don't need to input anything. Complete the function printTriangle() which takes an integer n  as the input parameter and prints the pattern accordingly.
     */

    void printTriangle(int n) {
        // code here
        String str = "";
        for (int i = 1; i < n + 1; i++) {
            for (int j = 0; j < i; j++) {
                if (j > 0) {
                    str += " ";
                }
                str += "*";
            }
            System.out.println(str);
            str = "";
        }
    }
}
