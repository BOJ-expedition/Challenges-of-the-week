// https://www.acmicpc.net/problem/1085

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] arr = br.readLine().trim().split(" ");
        final int x = Integer.parseInt(arr[0]);
        final int y = Integer.parseInt(arr[1]);
        final int w = Integer.parseInt(arr[2]);
        final int h = Integer.parseInt(arr[3]);
        int nomi_x = Math.min(x, w-x);
        int nomi_y = Math.min(y, h-y);

        bw.write(Math.min(nomi_x, nomi_y)+"\n");
        bw.flush();
        bw.close();
        br.close();
    }
}