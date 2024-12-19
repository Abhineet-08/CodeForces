import java.util.Scanner;

public class RequiredRemainder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while (t-- > 0) {
            int ans = 0;
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int n = scanner.nextInt();

            if ((n % x) == y) {
                ans = n;
            }
            if ((n % x) > y) {
                ans = n - (n % x) + y;
            }
            if ((n % x) < y) {
                ans = n - (n % x) - (x - y);
            }
            System.out.println(ans);

        }

        scanner.close();
    }
}
