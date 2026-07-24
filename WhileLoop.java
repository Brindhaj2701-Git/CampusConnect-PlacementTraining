import java.util.Scanner;

public class WhileLoop {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter N Value : ");
        n = sc.nextInt();
        System.out.println("Displaying Elements...");
        int i=1;
        while(i<=n){
            System.out.print(i + " ");
            i++;
        }
    }
}
