package Stupid;



import net.egork.chelper.util.InputReader;
import org.jetbrains.annotations.NotNull;

import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Task {

        public static void main(String[] args) throws IOException {
         Scanner in=new Scanner(System.in);
            PrintWriter out=new PrintWriter(System.out);
            TaskF solver = new TaskF();
            solver.solve(1, in, out);

        }

    static class TaskF {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = in.nextInt();
            for (int i = 0; i < t; i++) {
                BigInteger a = in.nextBigInteger();
                BigInteger b = in.nextBigInteger();
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
    static class InputReader {
        public BufferedReader reader;
        public StringTokenizer tokenizer;

        public InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }

        public String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

    }

}
