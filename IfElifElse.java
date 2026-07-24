import java.util.Scanner;

public class IfElifElse {
    public static void main(String[] args) {
        int mark;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your Mark : ");
        mark = sc.nextInt();
        if(mark > 90){
            System.out.println("Grade : O");
        }
        else if(mark > 80){
            System.out.println("Grade : A+");
        }
        else if(mark > 70){
            System.out.println("Grade : A");
        }
        else if(mark > 60){
            System.out.println("Grade : B+");
        }
        else if(mark > 50){
            System.out.println("Grade : B");
        }
        else{
            System.out.println("Grade : C");
        }
    }
}
