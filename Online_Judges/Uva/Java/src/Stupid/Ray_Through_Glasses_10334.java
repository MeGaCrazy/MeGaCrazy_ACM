package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Ray_Through_Glasses_10334 {
    public static final int N=1005;
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        BigInteger fib[]=new BigInteger[N];
        fib[0]=BigInteger.ONE;
        fib[1]=BigInteger.valueOf(2);
        for(int i=2;i<N;i++){
            fib[i]=fib[i-1].add(fib[i-2]);
        }
        int n;
        while(in.hasNext()){
            n=in.nextInt();
            out.println(fib[n]);
        }
    }
}
