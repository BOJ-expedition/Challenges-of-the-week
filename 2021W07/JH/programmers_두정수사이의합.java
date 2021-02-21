//https://programmers.co.kr/learn/courses/30/lessons/12912?language=java
public class Main {
    public static long solution(int a , int b) {
        long answer = 0;
        if(a == b) {
            return a;
        }

        if(a>b) {
            for( int i=b; i<=a; i++) {
                answer += i;
            }
        } else {
            for( int i=a; i<=b; i++) {
                answer += i;
            }
        }

        return answer;
    }
}
