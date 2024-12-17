import java.util.Scanner;

public class toMyCrirics {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            if (a + b >= 10) {
                System.out.println("Yes");
            } else if (a + c >= 10) {
                System.out.println("Yes");
            } else if (b + c >= 10) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
        scanner.close();
    }
}
