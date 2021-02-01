class Solution {
    public int solution(String s) {
 int answer = 0;
        answer= Integer.parseInt(s.replaceAll("[^0-9]",""));
        if(s.contains("-")){
            answer*=-1;
        }
        return answer;
    }
}
