package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class MODEX {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int t=in.nextInt();
        while(t-- >0){
            BigInteger x=new BigInteger(in.next());
            BigInteger n=new BigInteger(in.next());
            BigInteger y=new BigInteger(in.next());
             out.println(x.modPow(n,y));
        }
        t=in.nextInt();
    }
}
