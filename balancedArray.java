import java.util.Scanner;

public class balancedArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the number of test cases
        int t = scanner.nextInt();
        StringBuilder result = new StringBuilder();

        while (t-- > 0) {
            int n = scanner.nextInt();

            // Check if n is divisible by 4
            if (n % 4 != 0) {
                result.append("NO\n");
            } else {
                result.append("YES\n");

                // Construct the array
                int[] a = new int[n];
                int even = 2;
                int odd = 1;

                // First half: even numbers
                for (int i = 0; i < n / 2; i++) {
                    a[i] = even;
                    even += 2;
                }

                // Second half: odd numbers
                for (int i = n / 2; i < n - 1; i++) {
                    a[i] = odd;
                    odd += 2;
                }

                // Balance the sum
                a[n - 1] = even - 2 + (n / 2);

                // Append the array to the result
                for (int num : a) {
                    result.append(num).append(" ");
                }
                result.append("\n");
            }
        }

        // Print the final result
        System.out.print(result);

        scanner.close();
    }
}
