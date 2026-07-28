import java.util.*;

public class  KAMax
{
    public static void main (String[] args)
    {
        Scanner sc=new Scanner(System.in);

        int n,i;
        System.out.println("Enter the size of Array : ");
        n=sc.nextInt();

        int arr[]=new int[n];

        System.out.println("Enter Array Elements : ");
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        
        int currsum=arr[0],maxsum=arr[0];

        for(i=1;i<n;i++)
        {
            currsum=Math.max(arr[i],currsum+arr[i]);
            maxsum=Math.max(currsum,maxsum);
        }

        System.out.print("\nMaximum Sum Subarray : " + maxsum);
    }
}