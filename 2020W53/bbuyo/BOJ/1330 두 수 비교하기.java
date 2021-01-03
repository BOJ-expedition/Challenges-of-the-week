// https://www.acmicpc.net/problem/1330

import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] arr = br.readLine().trim().split(" ");
        int[] rs = Arrays.stream(arr).mapToInt(i -> Integer.parseInt(i)).toArray();
        if (rs[0] > rs[1]) {
            bw.write(">"+"\n");
        } else if(rs[0] < rs[1]) {
            bw.write("<"+"\n");
        } else {
            bw.write("=="+"\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }
}
