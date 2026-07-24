import java.util.Scanner;

public class SingleDArray {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of Array : ");
        n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter Array Elements : ");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        System.out.println("Array Elements...");
        for(int i=0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
    }
}
