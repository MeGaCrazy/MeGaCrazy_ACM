import java.util.Scanner;
import java.io.PrintWriter;

public class Task {
	public void solve(int testNumber, Scanner in, PrintWriter out) {
		testNumber=in.nextInt();
		while(testNumber-- >0) {
			int a = in.nextInt();
			int b = in.nextInt();
			out.print(a+b);
		}

	}
}
