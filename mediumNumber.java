import java.util.Scanner;

public class mediumNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            int medium;
            if ((a > b && a < c) || (a > c && a < b)) {
                medium = a;
            } else if ((b > a && b < c) || (b > c && b < a)) {
                medium = b;
            } else {
                medium = c;
            }
            System.out.println(medium);
        }
        scanner.close();
    }
}