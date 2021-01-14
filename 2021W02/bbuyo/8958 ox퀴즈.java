// https://www.acmicpc.net/problem/8958

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int T = Integer.parseInt(br.readLine().trim());
        String[] arr = new String[T];
        for (int i=0 ; i<T; i++) {
            arr[i] = br.readLine().trim();
        }

        for (int i=0; i<arr.length; i++){
            int score = 0;
            int combo = 0;
            for (int j=0; j<arr[i].length(); j++) {
                String s = String.valueOf(arr[i].charAt(j));
                if (s.equals("O")) {
                    combo += 1;
                    score += combo;
                } else if(s.equals("X")) {
                    combo = 0;
                }
            }
            bw.write(score+"\n");
            bw.flush();
        }
        bw.close();
        br.close();
    }
}
