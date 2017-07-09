package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Binomial_Theorem_11955 {
    static final int N = 51;

    public void solve(int testNumber, Scanner in, PrintWriter out) {
        BigInteger fac[] = new BigInteger[N];
        fac[0] = BigInteger.ONE;
        for (int i = 1; i < N; i++) {
            fac[i] = fac[i - 1].multiply(BigInteger.valueOf(i));
        }
        int t = in.nextInt(),cas=1;
        while (t-- > 0) {

            String all = in.next();
            String a = "", b = "";
            String power = "";
            boolean plus = false;
            boolean end = false;
            for (int i = 1; i < all.length(); i++) {
                if (all.charAt(i) == '+') {
                    plus = true;
                    continue;
                }
                if(all.charAt(i)==')'){
                    end=true;
                    i++;
                    continue;
                }
                if (plus == false) {
                    a += all.charAt(i);
                } else if (plus==true&&end==false) {
                    b+=all.charAt(i);
                }else if(end==true){
                    power+=all.charAt(i);
                }
            }
            out.print("Case "+(cas++)+": ");
            int max=Integer.parseInt(power);
            int powera=max,powerb=0;

            for(;powerb<=max;powera--,powerb++){
                int bla=Math.max(powera,powerb);
                BigInteger div=fac[bla].multiply(fac[max-bla]);
                BigInteger cof=fac[max].divide(div);
                if(cof.compareTo(BigInteger.ONE)!=0){
                    out.print(cof+"*");
                }
                if(powera!=0) {
                    out.print(a);
                    if (powera > 1) {
                        out.print("^" + powera);
                    }
                }
                if(powerb!=0){
                    if(powera!=0)out.print("*");
                    out.print(b);
                    if(powerb>1){
                        out.print("^"+powerb);
                    }
                }
                if(powerb!=max){out.print("+");}
            }
            out.println();
        }
    }
}
