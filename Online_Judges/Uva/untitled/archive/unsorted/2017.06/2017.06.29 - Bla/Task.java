package Stupid;

import net.egork.chelper.util.InputReader;

import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Task {

        public static void main(String[] args) {
            InputStream inputStream = System.in;
            OutputStream outputStream = System.out;
            InputReader in = new InputReader(inputStream);
            PrintWriter out = new PrintWriter(outputStream);
            TaskF solver = new TaskF();
            solver.solve(1, in, out);
            out.close();
        }

    static class TaskF {
        public void solve(int testNumber, InputReader in, PrintWriter out) {
            int t = in.read();
            for (int i = 0; i < t; i++) {
                BigInteger a = in.readBigInteger();
                BigInteger b = in.readBigInteger();
                a = reverse(a);
                b = reverse(b);
                BigInteger res = a.add(b);
                res = reverse(res);
                out.println(res);
            }

        }

        private BigInteger reverse(BigInteger a) {
            BigInteger base = BigInteger.TEN;
            BigInteger valid = BigInteger.ZERO;
            BigInteger res = new BigInteger("0");
            while (a.mod(base).compareTo(valid) == 1) {
                res.add(a.mod(base));
                a.divide(base);
            }
            return res;
        }
    }

}
