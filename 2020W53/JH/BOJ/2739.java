//https://www.acmicpc.net/source/24864855
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i=1; i<=9; i++) {
            System.out.println(n + " * " + i + " = " + n*i);
        }

    }
}
