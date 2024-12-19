import java.util.Scanner;

public class EvenArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read number of test cases
        int t = scanner.nextInt();

        while (t-- > 0) {
            // Read the length of the array
            int n = scanner.nextInt();
            int[] a = new int[n];

            // Read the array
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }

            // Count mismatches
            int evenIndexOddElement = 0;
            int oddIndexEvenElement = 0;

            for (int i = 0; i < n; i++) {
                if (i % 2 == 0 && a[i] % 2 != 0) {
                    evenIndexOddElement++; // Even index, odd element mismatch
                } else if (i % 2 != 0 && a[i] % 2 == 0) {
                    oddIndexEvenElement++; // Odd index, even element mismatch
                }
            }

            // Check feasibility
            if (evenIndexOddElement == oddIndexEvenElement) {
                System.out.println(evenIndexOddElement); // Minimum moves required
            } else {
                System.out.println(-1); // Not possible
            }
        }

        scanner.close();
    }
}
