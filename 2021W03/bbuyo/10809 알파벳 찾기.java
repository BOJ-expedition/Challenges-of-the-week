//https://www.acmicpc.net/problem/10809

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        String context = br.readLine().trim();

        // -1로 채워진 알파벳 배열 생성
        int[] alpha = new int[26];
        Arrays.fill(alpha, -1);
        int cnt = 0;

        // 입력 문자열 크기의 배열 생성
        int[] context_arr = new int[context.length()];

        // 입력문자를 차례대로 포인팅
        for(int i=0; i<context.length(); i++) {

            // 입력문자 하나를 아스키-97로
            context_arr[i] = context.charAt(i)-97;

            if(alpha[context_arr[i]] == -1) {
                alpha[context_arr[i]] = cnt;
            }
            cnt ++;
        }
        for (int n : alpha) {
            sb.append(n+" ");
        }
        bw.write(sb.toString().trim());
        bw.flush();
        bw.close();
        br.close();
    }
}