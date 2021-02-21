//https://programmers.co.kr/learn/courses/30/lessons/12922
public class Main {
    private static String solution(int n) {

        String answer = "";

        for(int i=1; i<=n; i++) {
            if(i % 2 == 0) {
                answer += "박";
            } else {
                answer += "수";
            }
        }
        return answer;
    }
}
