// https://www.acmicpc.net/problem/3052

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        Set arr = new HashSet();
        for (int i=1 ; i<=10; i++) {
            arr.add(Integer.parseInt(br.readLine().trim()) % 42);
        }
        System.out.println(arr.size());
    }
}
