// https://www.acmicpc.net/problem/10250

import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();
        final int T = Integer.parseInt(br.readLine().trim());

        for (int q=0; q<T; q++) {
            String context = br.readLine().trim();
            st = new StringTokenizer(context, " ");
            final int H = Integer.parseInt(st.nextToken()); // 층 수
            final int W = Integer.parseInt(st.nextToken()); // 가로 수
            final int N = Integer.parseInt(st.nextToken()); // 총 인원
            int w_start = 1;
            int h_start = 0;

            for (int i = 0; i < N; i++) {
                ++h_start;
                if (h_start > H) {
                    h_start = 1;
                    w_start++;
                }
            }
            String mw = "";
            if (w_start < 10) {
                mw = "0"+w_start;
            } else {
                mw = w_start+"";
            }
            sb.append(h_start+mw);
            bw.write(sb+"\n");
            bw.flush();
            sb.delete(0, sb.length());
        }
        bw.close();
        br.close();
    }
}