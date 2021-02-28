//https://programmers.co.kr/learn/courses/30/lessons/12903
public class Main3 {
    public static void main(String[] args) {
        System.out.println(solution("qwer"));
    }
    public static String solution(String s) {
        return s.length() % 2 == 0 ? s.substring(s.length() / 2 -1, s.length() / 2 +1) : String.valueOf(s.charAt(s.length() / 2));
    }
}
