package Stupid;

import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Task3 {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int t=in.nextInt();
        while(t-- >0){
            BigDecimal sum=new BigDecimal("0");
            BigDecimal a=in.nextBigDecimal();
            while(a.compareTo(BigDecimal.ZERO)!=0){
                sum=sum.add(a);
                a=in.nextBigDecimal();
            }
            if(sum.compareTo(BigDecimal.ZERO)==0){out.println("0");}
            else{
             out.println(sum.stripTrailingZeros().toPlainString());

            }
        }
    }
}
