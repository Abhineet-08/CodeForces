import java.util.Scanner;

public class dieRoll {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input: Y and W
        int Y = scanner.nextInt();
        int W = scanner.nextInt();

        // Calculate the maximum roll from Yakko and Wakko
        int maxRoll = Math.max(Y, W);

        // Calculate the numerator (favorable outcomes)
        int numerator = 6 - maxRoll + 1;

        // Denominator is always 6 (total outcomes)
        int denominator = 6;

        // Reduce the fraction using GCD
        int gcd = gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;

        // Output the irreducible fraction
        System.out.println(numerator + "/" + denominator);
        scanner.close();
    }

    // Helper method to calculate the greatest common divisor (GCD)
    private static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;

    }
}
