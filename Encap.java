import java.util.Scanner;

class Add{
    public int add(int a,int b){
        return a+b;
    }
}

class Sub{
    public int sub(int a,int b){
        return a-b;
    }
}

public class Encap {
    public static void main(String[] args) {
        Add a = new Add();
        Sub s = new Sub();
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 Values : ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        
        int S = a.add(num1,num2);
        int D = s.sub(num1,num2);

        System.out.println("Your Sum is " + S);
        System.out.println("Your Diff is " + D);


    }
}
