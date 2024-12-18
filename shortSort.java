import java.util.Scanner;

public class shortSort {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        scanner.nextLine(); // Consume the leftover newline

        while (t-- > 0) {
            String input = scanner.nextLine();

            // Check if input length is exactly 3
            if (input.length() != 3) {
                System.out.println("No");
                continue;
            }

            char char_a = input.charAt(0);
            char char_b = input.charAt(1);
            char char_c = input.charAt(2);

            // Check the conditions
            if (char_a == 'a' && char_b == 'b' || char_a == 'a' && char_b == 'c' || char_a == 'b' && char_b == 'a'
                    || char_a == 'c' && char_c == 'a') {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }

        scanner.close();
    }
}
