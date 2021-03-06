//https://www.acmicpc.net/source/24696339


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Scanner;

class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(bf.readLine());
        HashSet<String> set = new HashSet<>();
        for (int i = 0; i < num; i++) {
            String str = bf.readLine();
            set.add(str);
        }
        String[] arry = new String[set.size()];

        set.toArray(arry);

        Arrays.sort(arry, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                int s1 = o1.length();
                int s2 = o2.length();
                if (s1 == s2) {
                    int num = o1.compareTo(o2);
                    return o1.compareTo(o2);
                } else {
                    return o1.length() - o2.length();
                }
            }
        });
        for(int i =0;i<arry.length;i++) {
            if(i<arry.length-1){
                System.out.println(arry[i]);
            }else {
                System.out.print(arry[i]);
            }
        
        bf.close();
    }
}
