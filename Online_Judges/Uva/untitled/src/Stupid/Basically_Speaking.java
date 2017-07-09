package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Basically_Speaking {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        StringBuilder ret=new StringBuilder();
        while(in.hasNext()) {
            String a = in.next();
            int b = in.nextInt();
            int c = in.nextInt();
            BigInteger res = new BigInteger(a, b);
            a=res.toString(c);
            int len=a.length();
            if(len>7)ret.append("  ERROR" );
            else{
                for(int i=len;i<7;i++)ret.append(" ");
                ret.append(a.toUpperCase());
            }
            ret.append("\n");
        }
        out.print(ret.toString());
    }
}
