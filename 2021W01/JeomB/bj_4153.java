//https://www.acmicpc.net/source/25032956
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> arr = new ArrayList<>();

        while (true) {
            double a = sc.nextInt();
            double b = sc.nextInt();
            double c = sc.nextInt();
            double result1,result2,result3;
            if (a==0&&b==0&&c==0) {
                break;
            }
            result1 = Math.pow(a, 2) + Math.pow(b, 2);
            result2 =  Math.pow(b, 2) + Math.pow(c, 2);
            result3 =  Math.pow(a, 2) + Math.pow(c, 2);
            if (result1 == Math.pow(c, 2)|result2== Math.pow(a, 2)|result3== Math.pow(b, 2)) {
                arr.add("right");
            } else {
                arr.add("wrong");
            }
        }
       for(int j=0;j<arr.size();j++){
           System.out.print(arr.get(j));
           if (arr.size()-1!=j){
               System.out.println();
           }
       }
            sc.close();
        }
    }
