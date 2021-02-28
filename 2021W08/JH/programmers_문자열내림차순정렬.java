//https://programmers.co.kr/learn/courses/30/lessons/12917
//문자열 내림차순 정렬
import java.util.Arrays;
import java.util.Collections;

public class Main {


    public String solution(String s) {
        String answer = "";

        String[] arr = s.split("");

        Arrays.sort(arr,Collections.reverseOrder());

        for(String a : arr) {
            answer += a;
        }

        return answer;
    }

}
