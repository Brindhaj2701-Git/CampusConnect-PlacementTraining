import java.util.Scanner;

public class MulDArray {
    public static void main(String[] args) {
        int r,c;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of Row&Column for Multi Dimensional Array : ");
        r = sc.nextInt();
        c = sc.nextInt();
        int arr[][] = new int[r][c];
        System.out.println("Enter Array Elements : ");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("Array Multi-D Elements...");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
