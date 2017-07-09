package Stupid;

import java.math.BigInteger;
import java.util.Scanner;
import java.io.PrintWriter;

public class Fibinary_Numbers_763 {
    public void solve(int testNumber, Scanner in, PrintWriter out) {

        BigInteger fib[]=new BigInteger[105];
        fib[0]=BigInteger.ONE;
        fib[1]=BigInteger.valueOf(2);
        for(int i=2;i<105;i++){
           fib[i]=fib[i-1].add(fib[i-2]);
        }
        boolean line=false;
        while(in.hasNext()){
            String s=in.next();
            BigInteger n=new BigInteger("0");
            for(int i=0;i<s.length();i++){
              if(s.charAt(i)=='1'){
                  n=n.add(fib[s.length()-i-1]);
              }
            }
            s=in.next();
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)=='1'){
                    n=n.add(fib[s.length()-i-1]);
                }
            }
            if(line==true)out.println();
            line=true;
            boolean flag=false;
            for(int i=104;i>=0;i--){
                if(n.compareTo(fib[i])>=0){
                    n=n.subtract(fib[i]);
                    flag=true;
                    out.print("1");
                }else{
                    if(flag==true)out.print("0");
                }
            }
            if(!flag)out.print("0");
            out.println();
        }
    }
}
