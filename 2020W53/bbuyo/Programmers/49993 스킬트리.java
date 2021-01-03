//https://programmers.co.kr/learn/courses/30/lessons/49993?language=java

import java.util.ArrayList;
import java.util.List;

class Solution {
    public int solution(String skill, String[] skill_trees) {
        int result = 0;
        List<String> list = new ArrayList();
        List<Integer> searchSort = new ArrayList<>();

        for (String leaf : skill_trees) {
            boolean correctFlag = true;
            for (int i=0; i<leaf.length(); i++) {

                String w = String.valueOf(leaf.charAt(i));
                if(skill.contains(w)) {
                    list.add(w);
                }
            }
            for (int i=0; i< list.size(); i++) {
                int n = skill.indexOf(list.get(i));
                searchSort.add(n);
            }

            // assert
            if (searchSort.size() != 1) {
                for (int i = 1; i < searchSort.size(); i++) {
                    if (searchSort.get(0) != 0 || searchSort.get(i) - searchSort.get(i - 1) != 1) {
                        correctFlag = false;
                        break;
                    }
                }
            } else if (searchSort.size() == 1){
                if (searchSort.get(0) != 0) {
                    correctFlag = false;
                }
            }
            if (correctFlag) {
                result++;
            }

            searchSort.clear();
            list.clear();
        }

        return result;
    }
}