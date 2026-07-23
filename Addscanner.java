import java.util.Scanner;

public class Addscanner {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A Value : ");
        int a= sc.nextInt();
        System.out.println("Enter B Value : ");
        int b = sc.nextInt();
        int c = a+b;
        System.out.println("Sum Value : " + c);
    }
}
