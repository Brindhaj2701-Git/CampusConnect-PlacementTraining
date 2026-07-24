import java.util.Scanner;

public class Method {
    static void display(int a,int b){
        System.out.println("\nI am the Method here...");
        int total = a + b;
        System.out.println("Your Total : " + total);
    }
    public static void main(String[] args) {
        int a,b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A Value : ");
        a = sc.nextInt();
        System.out.println("Enter B Value : ");
        b = sc.nextInt();
        display(a,b);
    }
}
