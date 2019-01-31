import java.util.Scanner;

public class Main{
    public static void main(String args []) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int max = 0;

        for(int i = 0;i<n;i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int n1 =0;
            int n2 =0;
            int n3 =0;
            int n4 =0;
            int n5 =0;

            if(a==b && b==c) {
                n1 = 10000 + a*1000;
                if(n1>max) {
                    max = n1;
                }
            }
            else if(a==b && a !=c) {
                n2 = 1000 + a*100;
                if(n2>max) {
                    max = n2;
                }
            }
            else if(a==c && a != b) {
                n3 = 1000 + a*100;
                if(n3>max) {
                    max = n3;
                }
            }
            else if(b==c && b !=a) {
                n4 = 1000 + b*100;
                if(n4>max) {
                    max = n4;
                }
            }
            else {
                int m = a;
                if(b>m) m=b;
                if(c>m) m=c;
                
                n5 = m*100;
                if(n5>max) {
                    max = n5;
                }
            }
        }
        System.out.println(max);
    }
}