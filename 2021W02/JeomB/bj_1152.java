//https://www.acmicpc.net/source/25378132

import java.io.*;
import java.util.*;

public class Main {
        public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String str2 = str.trim();
        String n = " ";
        String[] list = str2.split(n);
        int size = list.length;
        if(list[0].equals("")){ size=0;}
        System.out.print(size);
    }
}
