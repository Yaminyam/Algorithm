import java.util.Scanner;

public class Main{
    public static void main(String args []) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int n1 =0;

        if(a==b && b==c)
            n1 = 10000 + a*1000;
        else if(a==b)
            n1 = 1000 + a*100;
        else if(a==c)
            n1 = 1000 + a*100;
        else if(b==c)
            n1 = 1000 + b*100;
        else {
            int m=a;
            if(m<b) m=b;
            if(m<c) m=c;
            n1=m*100;
        }
        System.out.println(n1);
    }
}