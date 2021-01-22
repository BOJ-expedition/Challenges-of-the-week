import java.util.*;
import java.util.regex.Pattern;

public class Solution {
    public static String[] solution(String[] record) {
        HashMap<String, String> map = new HashMap<>();
        ArrayList<String> list = new ArrayList();

        for (String str : record) {
            String[] s = str.split("\\s+");
            //1 아이디 2 닉넴
            if (s.length == 3) {
                //체인지거나 엔터면
                map.put(s[1], s[2]);
            }
        }

        for (String str : record) {
            String[] s = str.split("\\s+");
            //1 아이디 2 닉넴
            if (str.contains("Enter")) {
                list.add(map.get(s[1]) + "님이 들어왔습니다.");
            } else if (str.contains("Leave")) {
                list.add(map.get(s[1]) + "님이 나갔습니다.");
            }
        }

        String[] answer = new String[list.size()];

        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
            // System.out.println(answer[i]);
        }

        return answer;
    }

    public static void main(String[] args) {
        String[] str = {"Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan"};
        solution(str);
    }

}
