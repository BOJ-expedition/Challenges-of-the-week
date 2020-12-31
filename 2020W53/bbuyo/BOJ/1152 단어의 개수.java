//https://www.acmicpc.net/problem/1152

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] context = br.readLine().trim().split(" ");
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        if ("".equals(context[0])) {
            System.out.println(0);
        } else {
            bw.write(context.length + "\n");
        }
        br.close();
        bw.flush();
        bw.close();
    }
}