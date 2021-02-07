// https://www.acmicpc.net/problem/2231

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine().trim());

        int result = 0;

        for (int i=1; i<N; i++) {
            String i_str = i+"";
            int i_len = i_str.length();
            int tmp_sum = 0;
            for (int j=0; j<i_len; j++) {
                tmp_sum += Integer.parseInt(String.valueOf(i_str.charAt(j)));
            }
            tmp_sum += i;
            if (tmp_sum == N) {
                result = i;
                break;
            }
        }
        bw.write(result+"\n");
        bw.flush();
        bw.close();
        br.close();
    }
}