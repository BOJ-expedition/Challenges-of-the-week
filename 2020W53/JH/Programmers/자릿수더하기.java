//https://programmers.co.kr/learn/courses/30/lessons/12931
import java.util.*;
public class Main {
    public static void main(String[] args) {
        System.out.println(solution(987));
    }

    public static int solution(int n) {

        String temp = n + "";
        String[] arr = temp.split("");

        int answer = 0;
        for(int i=0; i< arr.length; i++) {
            answer += Integer.parseInt(arr[i]);
        }


        return answer;
    }

}
