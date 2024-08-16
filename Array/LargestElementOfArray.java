package Array;

public class LargestElementOfArray {

    /**
     * Problem Statement: Given an array, we have to find the largest element in the array.
     *
     * Examples
     * Example 1:
     * Input:
     *  arr[] = {2,5,1,3,0};
     * Output:
     *  5
     * Explanation:
     *  5 is the largest element in the array.
     *
     * Example2:
     * Input:
     *  arr[] = {8,10,5,7,9};
     * Output:
     *  10
     * Explanation:
     *  10 is the largest element in the array.
     */

    /**
     * My first approach
     * @param arr
     * @param n
     * @return
     */
    static int largestElement(int[] arr, int n) {
        // Write your code here.
        int max = 0;
        for(int i = 0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;

    }
}
