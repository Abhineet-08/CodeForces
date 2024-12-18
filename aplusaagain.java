import java.util.Scanner;

public class aplusaagain {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int ans = (n % 10) + (n / 10);
            System.out.println(ans);
        }

        scanner.close();
    }
}
