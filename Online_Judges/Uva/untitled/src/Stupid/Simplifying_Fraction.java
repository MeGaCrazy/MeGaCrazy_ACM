package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Simplifying_Fraction {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int t=in.nextInt();
        while(t-- >0){
            BigInteger a=new BigInteger(in.next());
            String s=in.next();
            BigInteger b=new BigInteger(in.next());
            BigInteger gcdd=a.gcd(b);
            out.println(a.divide(gcdd)+" / "+b.divide(gcdd));
        }

    }
}
