import java.util.Scanner;

public class minimise {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input the number of test cases
        int t = sc.nextInt();

        // Process each test case
        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            // Optimal value for c is the middle point (either a or b if even length)
            int c = (a + b) / 2;

            // Compute the minimum value of (c - a) + (b - c)
            int result = (c - a) + (b - c);

            // Output the result
            System.out.println(result);
        }

        sc.close();
    }
}
