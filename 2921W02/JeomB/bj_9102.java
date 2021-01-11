//https://www.acmicpc.net/source/25165785

import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String []str = new String[n];  // 결과를 담을 것임
        for(int i=0;i<n;i++){
            String str1 = br.readLine();
            while (str1.contains("()")){
                str1 = str1.replace("()","");
            }
            if(str1.equals("")){
                str[i]="YES";
            }else {
                str[i]="NO";
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(str[i]);
            if(i<n-1){
                System.out.println();
            }
        }
        br.close();
    }
} 
