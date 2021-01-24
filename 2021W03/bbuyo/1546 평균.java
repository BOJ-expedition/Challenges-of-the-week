//https://www.acmicpc.net/problem/1546

import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int T = Integer.parseInt(br.readLine().trim());
        String[] arr = br.readLine().trim().split(" ");
        double[] intArr = Arrays.stream(arr).mapToDouble(i -> Double.parseDouble(i)).toArray();
        Arrays.sort(intArr);
        int M = (int) intArr[intArr.length-1];
        for (int i=0; i<intArr.length; i++) {
            intArr[i] = intArr[i]/M*100;
        }
        double result  = Arrays.stream(intArr).sum();
        System.out.println(result/ intArr.length);
    }
}