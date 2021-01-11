// https://www.acmicpc.net/problem/2920

import java.io.*;
import java.util.Arrays;
import java.util.stream.Stream;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] arr = br.readLine().trim().split(" ");
        int[] arr2 = Arrays.stream(arr).mapToInt(i -> Integer.parseInt(i)).toArray();
        boolean isAcDc; //false 면 ac, true 면 dc
        int left = arr2[0];
        int right = arr2[1];
        int asrt = left - right;
        if (left - right < 0) {
            isAcDc = false;
        } else {
            isAcDc = true;
        }
        int cnt = 0;
        left = arr2[1];
        for (int i=2; i<arr2.length; i++) {
            right = arr2[i];
            asrt = left - right;
            if (asrt < 0) {
                if (isAcDc == true) {
                    cnt++;
                }
                isAcDc = false;
                left = right;

            } else if(asrt > 0) {
                if (isAcDc == false) {
                    cnt++;
                }
                isAcDc = true;
                left = right;

            }
        }

        if (cnt < 1) {
            if (isAcDc) {
                bw.write("descending"+"\n");
            } else {
                bw.write("ascending"+"\n");
            }
            bw.flush();
        } else {
            bw.write("mixed"+"\n");
            bw.flush();
        }
        bw.close();
        br.close();
    }
}