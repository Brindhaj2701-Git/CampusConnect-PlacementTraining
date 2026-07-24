import java.util.Scanner;

public class IfElse {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a value : ");
        num = sc.nextInt();
        if(num % 2 == 0){
            System.out.println("Even Number...");
        }
        else{
            System.out.println("Odd Number...");
        }
    }
}
