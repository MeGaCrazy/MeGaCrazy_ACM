package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Yet_another_Number_Sequence_10689 {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        StringBuilder sb = new StringBuilder();
        int T = in.nextInt();
        int arr [] = {0,60,300,1500,15000};
        BigInteger fib [] = new BigInteger[15002];
        fib[0] = BigInteger.ZERO;
        fib[1] = BigInteger.ONE;
        for (int i = 2 ; i <= 15001 ; ++i)
            fib[i] = fib[i - 1].add(fib[i - 2]);

        while (T -- > 0)
        {
            int a = in.nextInt() , b = in.nextInt() , n = in.nextInt() , m = in.nextInt();

            n %= arr[m];
            String wanted = ((new BigInteger((b) + "").multiply(fib[n])).add(new BigInteger(a +"").multiply(n == 0 ? BigInteger.ONE: fib[n - 1]))).toString();
            out.println("b is"+ b +" fib[n] is "+fib[n]);
            out.println("b * f[n]+a " + (new BigInteger((b) + "").multiply(fib[n])).add(new BigInteger(a +"")));
            out.println((n == 0 ? BigInteger.ONE: fib[n - 1]));
            sb.append(Integer.parseInt(wanted.substring(Math.max(0,wanted.length() - m) , wanted.length()))+"\n");
        }
        out.print(sb.toString());
    }
}
