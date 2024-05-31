import java.util.Scanner;
public class PerfectNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number to find If It is Perfect Number:");
        int n=sc.nextInt();
        int sum=0,flag=0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
            if(sum==n)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            System.out.println("Number is Perfect Number!!");
        else
            System.out.println("Number is not a Perfect Number!!");
    }
}

// output:
// Enter the Number to find If It is Perfect Number:
// 6
// Number is Perfect Number!!

// Enter the Number to find If It is Perfect Number:
// 9
// Number is not a Perfect Number!!
