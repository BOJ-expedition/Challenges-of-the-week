import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        String[] arr = s.split(" ");

        int a = Integer.parseInt(arr[0]);
        int b = Integer.parseInt(arr[1]);

        if(a > b) {
            System.out.println(">");
        } else if (a<b) {
            System.out.println("<");
        } else {
            System.out.println("==");
        }

    }
}
