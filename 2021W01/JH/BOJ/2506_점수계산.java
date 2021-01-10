////https://www.acmicpc.net/source/25129118
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String a = sc.nextLine();
        String b = sc.nextLine();

        int c = Integer.parseInt(a);

        String[] arr = b.split(" ");

        int answer = 0;

        int count = 0;

        for(int i=0; i<c; i++) {
            if(!arr[i].equals("0")) {
                count ++;
                answer += count;
            } else {
                count = 0;
            }

        }

        System.out.println(answer);


    }
}
