// https://programmers.co.kr/learn/courses/30/lessons/42889#qna

package bj;

import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Solution_ s = new Solution_();
        s.solution(4, new int[]{4,4,4,4,4});
    }
}

class Solution_ {
    public int[] solution(int N, int[] stages) {
        HashMap<Integer, Double> map = new LinkedHashMap<>();

        int people = stages.length;
        int struggle = 0;
        double failRate;

        Arrays.sort(stages);

        for (int i=1; i<=N; i++) {
            people -= struggle;
            struggle = 0;


            for (int j=0; j<stages.length; j++) {
                if (i==stages[j]) {
                    ++struggle;
                }
            }
            if (people == 0) {
                failRate = 0;
            } else {
                failRate = (double) struggle / people;
            }
            map.put(i, failRate);
        }

        map = sortByValue(map);


        int[] result = new int[N];
        int i=0;
        for (int n : map.keySet()) {
            result[i] = n;
            ++i;
        }
        return result;
    }

    public static LinkedHashMap<Integer, Double> sortByValue(HashMap<Integer, Double> map) {
        List<Map.Entry<Integer, Double>> entries = new LinkedList<>(map.entrySet());
        Collections.sort(entries, (o1, o2) -> o2.getValue().compareTo(o1.getValue()));

        LinkedHashMap<Integer, Double> result = new LinkedHashMap<>();
        for (Map.Entry<Integer, Double> entry : entries) {
            result.put(entry.getKey(), entry.getValue());
        }
        return result;
    }
}
