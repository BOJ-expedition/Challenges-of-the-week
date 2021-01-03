class Main {
        public static int solution(String skill, String[] skill_trees) {
            int answer = 0;
            boolean num1 = true;

            for(int i=0;i<skill_trees.length;i++) {           
                ArrayList<Integer> arr = new ArrayList<>();
                
                for (int j = 0; j < skill.length(); j++) {
                    arr.add(skill_trees[i].indexOf(skill.charAt(j)));
                }
                for (int j = 0; j < skill_trees[i].length() - 1; j++) {
                    if (skill_trees[i].charAt(j) == skill_trees[i].charAt(j + 1)) { num1 = false; }
                }

                if(arr.size()==0){ answer+=1;}
                if(skill.length()==1){ answer+=1 ;}

                if (num1) {
                    for (int j = 0; j < arr.size() - 1; j++) {
                        if (arr.get(j) == -1 && arr.get(j + 1) != -1) { break; }
                        if (arr.get(j + 1) != -1 && arr.get(j) > arr.get(j + 1)) { break; }
                        if (j == arr.size() - 2) { answer += 1; }
                    }
                        if(arr.size()==0){ answer+=1;}
                        if(skill.length()==1){ answer+=1 ;}
                }
            }
            return answer;
        }

    public static void main(String[] args){
      /* 테스트 코드 
        String skil = "CBD";
        String [] skil_trees = {"BACDE", "CBADF", "AECB", "BDA"};
        System.out.println(solution(skil,skil_trees)); */
    }
}
