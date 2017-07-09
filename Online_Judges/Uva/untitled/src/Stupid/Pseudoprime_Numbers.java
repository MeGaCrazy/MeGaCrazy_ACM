package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Pseudoprime_Numbers {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        BigInteger p = in.nextBigInteger();
        BigInteger a = in.nextBigInteger();
        while (p.compareTo(BigInteger.ZERO) != 0 && a.compareTo(BigInteger.ZERO) != 0) {
                if (!p.isProbablePrime(10)&&a.modPow(p,p).equals(a)) {
                    out.println("yes");
                } else {
                    out.println("no");
                }
            p = in.nextBigInteger();
            a = in.nextBigInteger();
        }
    }
}
