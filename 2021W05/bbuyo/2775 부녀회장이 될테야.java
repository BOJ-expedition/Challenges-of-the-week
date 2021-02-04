// https://www.acmicpc.net/problem/2775

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int T = Integer.parseInt(br.readLine());
        String[][] kn = new String[T][2];
        for (int i=0; i<T; i++) {
            kn[i][0] = br.readLine();
            kn[i][1] = br.readLine();
        }


        int[][] whole_floor = new int[15][];

        // 0층 초기화
        int[] tmp_arr = new int[15];
        for (int a=1; a<=tmp_arr.length; a++) {
            tmp_arr[a-1] = a;
        }
        whole_floor[0] = tmp_arr;

        for (int i=1; i< tmp_arr.length; i++) {
            int[] sp_floor = new int[15];
            for (int j=0; j<sp_floor.length; j++) {
                for (int k=0; k<=j; k++) {
                    sp_floor[j] += whole_floor[i - 1][k];
                }
            }
            whole_floor[i] = sp_floor;
        }

        for (int i=0; i<T; i++) {
            int K = Integer.parseInt(kn[i][0]);
            int N = Integer.parseInt(kn[i][1]);
            bw.write(whole_floor[K][N-1]+"\n");
            bw.flush();
        }
        bw.close();
        br.close();
    }
}
