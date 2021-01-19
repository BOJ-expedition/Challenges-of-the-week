// https://programmers.co.kr/learn/courses/30/lessons/42888?language=java

import java.util.ArrayList;
import java.util.HashMap;

class Solution {
    public String[] solution(String[] record) {
        HashMap<String, String> map = new HashMap<>();
        ArrayList<String> list = new ArrayList<>();
        for (String r : record) {
            String[] tmp = r.split(" ");
            if (tmp[0].equals("Enter") || tmp[0].equals("Change")) {
                map.put(tmp[1], tmp[2]);
            }
        }

        for (int i=0; i<record.length; i++) {
            String act = record[i].split(" ")[0];
            String id = record[i].split(" ")[1];
            if (act.equals("Enter")) {
                list.add(map.get(id)+"님이 들어왔습니다.");
            } else if(act.equals("Leave")) {
                list.add(map.get(id)+"님이 나갔습니다.");
            }
        }

        String[] answer = list.stream().toArray(size -> new String[size]);
        return answer;
    }
}