import java.util.Scanner;
public class ReverseNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number to Reverse:");
        int n=sc.nextInt();
        int remainder;
        System.out.print("Reverse Order of Number is:");
        while(n>0)
        {
            remainder=n%10;
            System.out.print(remainder);
            n=n/10;
        }
    }
}
// output:
// Enter the Number to Reverse:
// 56789
// Reverse Order of Number is:98765