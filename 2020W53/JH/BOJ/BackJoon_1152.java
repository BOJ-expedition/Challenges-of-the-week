//https://www.acmicpc.net/source/24698084

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] arr = sc.nextLine().trim().split(" ");

        if(arr.length > 0) {

            if(arr[0].equals("")) {
                System.out.println(arr.length -1);
            } else {
                System.out.println(arr.length);
            }

        } else {
            System.out.println(0);
        }



    }
}
