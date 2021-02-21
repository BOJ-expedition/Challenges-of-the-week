// https://programmers.co.kr/learn/courses/30/lessons/12918
public class Main {
    private static boolean solution(String s) {
        if(s.length() != 4 && s.length() != 6) {
            return false;
        }

        for(int i=0; i<s.length(); i++) {
            char c = s.charAt(i);

            try {
                int num = Integer.parseInt(String.valueOf(c));
            } catch (NumberFormatException e) {
                return false;
            }

        }

        return true;
    }
}
