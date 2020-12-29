import java.util.ArrayList;
//https://programmers.co.kr/learn/courses/30/lessons/49993

class Solution {
    public int solution(String skill, String[] skill_trees) {
       
        int answer = 0;

        ArrayList<String> skillSetList = new ArrayList<>();

        boolean flag = false;



        for(int i=0; i< skill_trees.length; i++) {
            String temp = skill_trees[i];

            for(int k=0; k<temp.length(); k++) {
                for(int j=0; j<skill.length(); j++) {
                    if(temp.charAt(k) == skill.charAt(j)) {
                        skillSetList.add(temp.charAt(k) +"");
                    }
                }
            }




            if(skillSetList.size() != 0) {
                String temp2 = "";
                for(int k=0; k<skillSetList.size(); k++) {
                    temp2 += skillSetList.get(k);
                }

                String temp3 = skill;

                for(int m=0; m< temp2.length(); m++) {
                    if(temp2.charAt(m) != temp3.charAt(m)) {
                        flag = false;
                        break;
                    }  else {
                        flag = true;
                    }
                }

                if(flag) {
                    answer++;
                }

            } else {
                answer++;
            }

            skillSetList.clear();
            flag = false;

        }


        return  answer;
    }
}