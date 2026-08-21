import java.util.Scanner;

public class Bethrod {
      public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int n1 = sc.nextInt();

        System.out.print("Enter second number: ");
        int n2 = sc.nextInt();

        int sum1 = 0;
        int sum2 = 0;

        // Find sum of proper divisors of n1
        for (int i = 1; i < n1; i++) {
            if (n1 % i == 0) {
                sum1 = sum1 + i;
            }
        }

        // Find sum of proper divisors of n2
        for (int i = 1; i < n2; i++) {
            if (n2 % i == 0) {
                sum2 = sum2 + i;
            }
        }

        // Check Betrothed Numbers
        if (sum1 == n2 + 1 && sum2 == n1 + 1) {
            System.out.println("Betrothed Numbers");
        } else {
            System.out.println("Not Betrothed Numbers");
        }

        sc.close();
    }
}
