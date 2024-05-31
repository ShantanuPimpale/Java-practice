import java.util.Scanner;
public class ArmstrongNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number to find If It is Armstrong Number:");
        int n=sc.nextInt();
        int a=n;
        int arm=0;
        while(n>0)
        {
            int remainder=n%10;
            arm=(remainder*remainder*remainder)+arm;
            n=n/10;
        }
        if(arm==a)
            System.out.println("Number is Armstrong Number!!");
        else    
            System.out.println("Numbe is not Armstrong Number!!");
    }
}
// output:
// Enter the Number to find If It is Armstrong Number:
// 153
// Number is Armstrong Number!!
// PS C:\Users\Mayuri\OneDrive\Desktop\Java> cd "c:\Users\Mayuri\OneDrive\Desktop\Java\" ; if ($?) { javac ArmstrongNumber.java } ; if ($?) { java ArmstrongNumber }
// Enter the Number to find If It is Armstrong Number:
// 134
// Numbe is not Armstrong Number!!