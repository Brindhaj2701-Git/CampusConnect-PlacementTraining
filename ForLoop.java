import java.util.Scanner;

public class ForLoop {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter N Value : ");
        n = sc.nextInt();
        System.out.println("Displaying Elements...");
        for(int i=1;i<=n;i++){
            System.out.print(i + " ");
        }

    }
}
