//https://www.acmicpc.net/problem/9498

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine().trim());
        if (n>=90 && n<=100) {
            bw.write("A"+"\n");
        } else if(n>=80 && n<=89) {
            bw.write("B"+"\n");
        } else if(n>=70 && n<=79) {
            bw.write("C"+"\n");
        } else if(n>=60 && n<=69) {
            bw.write("D"+"\n");
        } else {
            bw.write("F"+"\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
