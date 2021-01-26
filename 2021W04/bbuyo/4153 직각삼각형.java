// https://www.acmicpc.net/problem/4153

import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        while(true) {
            String[] arr = br.readLine().trim().split(" ");

            double mx = Integer.parseInt(arr[0]);
            double my = Integer.parseInt(arr[1]);
            double mz = Integer.parseInt(arr[2]);

            double x; double y;
            x = y = 0;
            double z = Math.max(mx, Math.max(my, mz));
            int max = 0;
            int m_index=0;
            for (int i=0; i<3; i++) {
                if ((int)z == Integer.parseInt(arr[i])) {
                    max = Integer.parseInt(arr[i]);
                    m_index = i;
                }
            }

            for (int i=0; i<3; i++) {
                if (i==m_index) {
                    continue;
                }

                if (x == 0) {
                    x = Integer.parseInt(arr[i]);
                } else if (y == 0){
                    y = Integer.parseInt(arr[i]);
                }
            }

            if (mx == 0 && my == 0 && mz ==0){
                break;
            }

            if (((int)Math.pow(x, 2) + (int)Math.pow(y, 2)) == (int)Math.pow(z, 2)) {
                bw.write("right" + "\n");
            } else {
                bw.write("wrong" + "\n");
            }
            bw.flush();

        }

        bw.close();
        br.close();
    }
}