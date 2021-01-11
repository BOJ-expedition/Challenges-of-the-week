//https://www.acmicpc.net/source/25129596

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];

        for(int i=0; i<arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        int sum = 0;
        for(int i : arr) {
            if(i < 40) {
                sum += 40;
            } else {
                sum += i;
            }
        }

        System.out.println(sum / 5);

    }
}
