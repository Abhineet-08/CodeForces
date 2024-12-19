import java.util.Scanner;

public class PanoramixPrediction {
    private static boolean isPrime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    // Function to find the next prime number after a given number
    private static int nextPrime(int n) {
        int candidate = n + 1;
        while (!isPrime(candidate)) {
            candidate++;
        }
        return candidate;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read inputs n and m
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        scanner.close();

        // Check if m is the next prime after n
        if (nextPrime(n) == m) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
