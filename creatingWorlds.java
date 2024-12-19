import java.util.Scanner;

public class creatingWorlds {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt(); // Number of test cases
        scanner.nextLine(); // Consume the newline after the integer input

        while (t-- > 0) {
            // Read the entire line and split it into two strings
            String input = scanner.nextLine();
            String[] parts = input.split(" ");

            // Ensure exactly two strings are present
            if (parts.length == 2) {
                String a = parts[0];
                String b = parts[1];

                if (!a.isEmpty() && !b.isEmpty()) { // Ensure both strings are non-empty
                    // Swap the first characters
                    char c = a.charAt(0);
                    char d = b.charAt(0);

                    // Create new strings with swapped first characters
                    a = d + a.substring(1);
                    b = c + b.substring(1);
                }

                System.out.println(a + " " + b);
            } else {
                System.out.println("Invalid input. Each line must contain exactly two space-separated strings.");
            }
        }

        scanner.close();
    }
}
