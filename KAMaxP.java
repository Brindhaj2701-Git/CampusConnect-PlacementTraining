import java.util.*;

public class KAMaxP {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of Array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];

        System.out.println("Enter Array Elements : ");

        for (int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
            
        int maxProduct = arr[0];
        int minProduct = arr[0];
        int result = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < 0) {
                int temp = maxProduct;
                maxProduct = minProduct;
                minProduct = temp;
            }

            maxProduct = Math.max(arr[i], maxProduct * arr[i]);
            minProduct = Math.min(arr[i], minProduct * arr[i]);

            result = Math.max(result, maxProduct);
        }

        System.out.println("\nMaximum Product SubArray : " + result);
    }
}

