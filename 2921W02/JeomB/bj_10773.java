//https://www.acmicpc.net/source/25166447

import java.io.*;
import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int sum =0;
        Stack<Integer> stack = new Stack<>();

        for(int i =0; i<n;i++){
            int num = Integer.parseInt(br.readLine());
            if(num==0){
                stack.pop();
                continue;
            }
            stack.push(num);
        }

        while (!stack.empty()){
            int a = stack.peek();
            sum+=a;
            stack.pop();
        }
        System.out.print(sum);
        br.close();
    }
}
