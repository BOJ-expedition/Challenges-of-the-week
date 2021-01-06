// https://www.acmicpc.net/problem/2475

import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] arr = br.readLine().trim().split(" ");
        int r = Arrays.stream(arr).mapToInt((i -> Integer.parseInt(i) * Integer.parseInt(i))).sum();
        System.out.println(r%10);
    }
}