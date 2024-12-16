import java.util.Scanner;
import java.util.Arrays;

public class minSwaps {
    public static int getMin(int[] arr) {
        return Arrays.stream(arr).min().getAsInt();
    }

    public static int getMax(int[] arr) {
        return Arrays.stream(arr).max().getAsInt();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input size of the array
        int n = scanner.nextInt();
        int[] arr = new int[n];

        // Input elements of the array
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Find min and max values in the array
        int min = getMin(arr);
        int max = getMax(arr);

        // Find max_index (first occurrence from the start)
        int maxIndex = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == max) {
                maxIndex = i;
                break;
            }
        }

        // Find min_index (last occurrence from the end)
        int minIndex = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == min) {
                minIndex = i;
                break;
            }
        }

        // Calculate the minimum swaps
        int ans;
        if (minIndex > maxIndex) {
            ans = (n - 1 - minIndex) + maxIndex;
        } else {
            ans = (n - 1 - minIndex) + maxIndex - 1;
        }

        // Output the result
        System.out.println(ans);
    }
}
