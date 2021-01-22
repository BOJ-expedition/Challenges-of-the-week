// https://www.acmicpc.net/problem/11720

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine().trim());
        String n = br.readLine().trim();
        int result = 0;
        for (int i=0; i<n.length(); i++) {
            int tmp = (Integer.parseInt(String.valueOf(n.charAt(i))));
            result+=tmp;
        }
        bw.write(result+"\n");
        bw.flush();
        bw.close();
        br.close();
    }
}