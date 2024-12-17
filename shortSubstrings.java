import java.util.Scanner;

public class shortSubstrings {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases
        scanner.nextLine(); // Consume the newline

        while (t-- > 0) {
            String b = scanner.nextLine();
            StringBuilder a = new StringBuilder();

            a.append(b.charAt(0)); // Append the first character of b

            for (int i = 1; i < b.length(); i += 2) {
                a.append(b.charAt(i)); // Append the second character of each substring
            }

            System.out.println(a.toString());
        }

        scanner.close();
    }
}
