import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.math.BigDecimal;
import java.util.Scanner;

/**
 * Built using CHelper plug-in
 * Actual solution is at the top
 *
 * @author MeGaCrazy
 */
public class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        Scanner in = new Scanner(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Task3 solver = new Task3();
        solver.solve(1, in, out);
        out.close();
    }

    static class Task3 {
        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = in.nextInt();
            while (t-- > 0) {
                BigDecimal sum = new BigDecimal("0");
                BigDecimal a = in.nextBigDecimal();
                while (a.compareTo(BigDecimal.ZERO) != 0) {
                    sum = sum.add(a);
                    a = in.nextBigDecimal();
                }
                if (sum.compareTo(BigDecimal.ZERO) == 0) {
                    out.println("0");
                } else {
                    out.println(sum.stripTrailingZeros().toPlainString());

                }
            }
        }

    }
}

