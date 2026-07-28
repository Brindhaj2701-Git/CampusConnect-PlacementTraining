import java.util.Scanner;

public class LCS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1,s2;
        System.out.println("Enter String 1 :");
        s1 = sc.next();
        System.out.println("\nEnter String 2 :");
        s2 = sc.next();

        char a[] = s1.toCharArray();
        char b[] = s2.toCharArray();

        int l1,l2,i,j;
        l1 = s1.length();
        l2 = s2.length();

        int arr[][] = new int[l2+1][l1+1];

        for(i=0;i<l2+1;i++){
            for(j=0;j<l1+1;j++){
                arr[i][j] = 0;
            }
        }

        for(i=1;i<l2+1;i++){
            for(j=1;j<l1+1;j++){
                if(b[i-1] == a[j-1]){
                    arr[i][j] = arr[i-1][j-1] + 1 ;
                }
                else{
                    arr[i][j] = Math.max(arr[i][j-1],arr[i-1][j]);
                }
            }
        }

        System.out.println("\nLargest Common SubString : " + arr[l2][l1]);

        System.out.println("\nMatrix Foramt : ");

        for(i=0;i<l2+1;i++){
            for(j=0;j<l1+1;j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
