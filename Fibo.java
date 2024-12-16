import java.util.Scanner;

public class Fibo {
    
    static int fib(int n)
    {      
        int f[] = new int[n + 1];
        int i;
        f[0] = 0;
 
        if (n > 0) {
            f[1] = 1;
 
            for (i = 2; i <= n; i++) {
                f[i] = f[i - 1] + f[i - 2];
            }
        }
        return f[n];
    }
 
    public static void main(String args[])
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = scanner.nextInt();
        System.out.println(fib(n));
        scanner.close();
    }
}
