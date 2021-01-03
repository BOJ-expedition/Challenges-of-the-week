제출코드
// https://www.acmicpc.net/source/24696686

package bbuyo.BOJ;

import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N= Integer.parseInt(bf.readLine());
        int result = 0;

        boolean correct_flag = false;
        for (int i = N; i>=4; i--) {
            String tmp_i = i+"";

            for (int j=0; j<tmp_i.length(); j++) {
                String p = String.valueOf(tmp_i.charAt(j));

                if(p.equals("4") || p.equals("7")) {
                    correct_flag = true;
                } else if (!p.equals("4") || !p.equals("7")) {
                    correct_flag = false;
                    break;
                }
            }
            if (correct_flag) {
                result = Integer.parseInt(tmp_i);
                break;
            }
        }

        bw.write(result+"\n");
        bw.flush();
        bw.close();
    }
}
