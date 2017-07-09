package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Stripe_10541 {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int t=in.nextInt();
        while(t-->0){
            int n=in.nextInt();
            int k=in.nextInt();
            int black=0;
            for(int i=0;i<k;i++){
                black+=in.nextInt();
            }
            int white=n-black;
            white++;
            if(k>white){out.println("0");}
            else{
                BigInteger a=BigInteger.ONE;
                for(int i=1;i<=white;i++){
                    a=a.multiply(BigInteger.valueOf(i));
                }
                BigInteger b=BigInteger.ONE;
                for(int i=1;i<=k;i++){
                    b=b.multiply(BigInteger.valueOf(i));
                }
                BigInteger c=BigInteger.ONE;
                for(int i=1;i<=(white-k);i++){
                    c=c.multiply(BigInteger.valueOf(i));
                }

                BigInteger ret=a.divide(b.multiply(c));
                out.println(ret);

            }



        }

    }
}
