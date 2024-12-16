import java.util.Scanner;

public class yetAnother {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the number of test cases
        int t = scanner.nextInt();

        while (t-- > 0) {
            // Input values for a and b
            int a = scanner.nextInt();
            int b = scanner.nextInt();

            int ans = 0;
            int rem = Math.abs(a - b); // Absolute difference between a and b

            if (a == b) {
                ans = 0; // No steps required
            } else {
                if (rem <= 10) {
                    ans = 1; // Difference is within one step
                } else {
                    if (rem % 10 == 0) {
                        ans = rem / 10; // Exact multiple of 10
                    } else {
                        ans = rem / 10 + 1; // Additional step for remaining difference
                    }
                }
            }

            // Output the result for the current test case
            System.out.println(ans);
        }

        scanner.close();
    }
}
