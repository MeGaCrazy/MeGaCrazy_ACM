package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Basic_Remains {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int base=in.nextInt();
        while(base>0){
            BigInteger a=new BigInteger(in.next(),base);
            BigInteger b=new BigInteger(in.next(),base);
            out.println(a.mod(b).toString(base));
            base=in.nextInt();
        }
    }
}
