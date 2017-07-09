package Stupid;

import java.util.Scanner;
import java.io.PrintWriter;

public class TaskA {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n=in.nextInt();
        int d=in.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        d-=10*(n-1);
        for(int i=0;i<n;i++){
            d-=arr[i];
        }
        if(d<0){
            out.println("-1");
            return;
        }
        long sum=0;
        sum=(n-1)*2;
        sum+=d/5;
        out.println(sum);
    }
}
