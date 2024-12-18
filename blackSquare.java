import java.util.Scanner;

public class blackSquare {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read integers a, b, c, d
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int d = scanner.nextInt();
        scanner.nextLine(); // Consume the leftover newline

        // Read the input string
        String input = scanner.nextLine();
        int ans = 0;

        // Calculate the total based on the input string
        for (int i = 0; i < input.length(); i++) {
            char cr = input.charAt(i);
            if (cr == '1') {
                ans += a;
            } else if (cr == '2') {
                ans += b;
            } else if (cr == '3') {
                ans += c;
            } else if (cr == '4') {
                ans += d;
            }
        }

        // Print the result
        System.out.println(ans);

        scanner.close();
    }
}
