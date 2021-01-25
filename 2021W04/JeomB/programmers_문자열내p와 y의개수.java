class Solution {
    boolean solution(String s) {
      boolean answer = true;

        int P = 0;
        int Y = 0;

        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==121||s.charAt(i)==89){
                P++;
            }else if(s.charAt(i)==112||s.charAt(i)==80){
                Y++;
            }
        }

        if(P!=Y){
            answer =false;
        }

        return answer;
    }
}
