// https://www.acmicpc.net/problem/1000

import java.io.*;
import java.util.Arrays;

public class apb {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] sr = br.readLine().split(" ");
        int result = Arrays.stream(sr).mapToInt(i-> Integer.parseInt(i)).sum();
        System.out.println(result);
    }
}
