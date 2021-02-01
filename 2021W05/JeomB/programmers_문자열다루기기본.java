class Solution {
    public boolean solution(String s) {
        boolean answer = true;
        String str = "";
        if(s.length()==4|s.length()==6){
            str =s.replaceAll("[^0-9]","");
        }
        if(str.length()!=s.length()){
            answer = false;
        }
        return answer;
    }
}
