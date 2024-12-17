import java.util.Scanner;

public class oddOneOut {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while (t-- > 0) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            if (a == b) {
                System.out.println(c);
            } else if (b == c) {
                System.out.println(a);
            } else {
                System.out.println(b);
            }
        }

        scanner.close();
    }
}
