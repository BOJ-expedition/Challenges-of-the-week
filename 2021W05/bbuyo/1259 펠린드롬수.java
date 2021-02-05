// https://www.acmicpc.net/problem/1259

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        boolean correct_flag = false;
        while(true) {
            String context = br.readLine().trim();
            if (context.equals("0")) {
                break;
            }
            if (context.length() == 1) {
                correct_flag = true;
            }

            for (int i=0; i<context.length()/2; i++) {
                String left = String.valueOf(context.charAt(i));
                String right = String.valueOf(context.charAt(context.length() - 1 - i));

                if (!left.equals(right)) {
                    correct_flag = false;
                    break;
                } else {
                    correct_flag = true;
                }
            }

            if(!correct_flag) {
                bw.write("no" + "\n");
            } else {
                bw.write("yes" + "\n");
            }
            bw.flush();
        }
        bw.close();
        br.close();

    }
}
