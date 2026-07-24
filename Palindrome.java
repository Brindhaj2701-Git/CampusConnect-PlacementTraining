import java.util.*;

public class Palindrome {
    public static void main (String[] args) {
        String s;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Your String : ");
        s=sc.next();
        String temp=s;
        char temp1;
        char arr[]=s.toCharArray();
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
           temp1=arr[i];
           arr[i]=arr[j];
           arr[j]=temp1;
           i++;
           j--;
        }
        String ans=new String(arr);

        System.out.println("Reversed String : " +ans);
        if(temp.equals(ans))
        System.out.println("Yes...It is Palindrome");
        else
        System.out.println("No...It is not Palindrome");
    }
}

