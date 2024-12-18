import java.util.Scanner;

public class mishakaAndGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int mis_count = 0, chr_count = 0;
        while (t-- > 0) {
            int mis = scanner.nextInt();
            int chr = scanner.nextInt();
            if (mis == chr) {
                mis_count = mis_count + 1;
                chr_count = chr_count + 1;
            } else if (mis > chr) {
                mis_count = mis_count + 1;
            } else {
                chr_count = chr_count + 1;
            }
        }
        if (mis_count > chr_count) {
            System.out.println("Mishka");
        } else if (chr_count > mis_count) {
            System.out.println("Chris");
        } else {
            System.out.println("Friendship is magic!^^");
        }

        scanner.close();
    }
}
