//https://www.acmicpc.net/problem/1157

import java.io.*;
import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) throws IOException {
        HashMap<String, Integer> m = new HashMap<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String context = br.readLine().trim().toUpperCase();
        for (int i=0; i<context.length(); i++) {
            String keyword = String.valueOf(context.charAt(i));
            if (!m.containsKey(keyword)) {
                m.put(keyword, 1);
            } else {
                int n = m.get(keyword);
                m.put(keyword, n+1);
            }
        }

        int max = 0;
        boolean l = false;
        for(int cnt : m.values()) {
            if (cnt == max) {
                l = true;
            }
            else {
                if(cnt > max) {
                    max = cnt;
                    l = false;
                }
            }
        }

        if (!l) {
            bw.write(getKey(m, max)+"\n");
        } else {
            bw.write("?"+"\n");
        }

        br.close();
        bw.flush();
        bw.close();
    }

    public static <K, V> K getKey(Map<K, V> map, V value) {
        for (K key : map.keySet()) {
            if (value.equals(map.get(key))){
                return key;
            }
        }
        return null;
    }
}
