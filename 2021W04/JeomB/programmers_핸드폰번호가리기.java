class Solution {
    public String solution(String phone_number) {
     String answer = "";
        String str = phone_number.substring(phone_number.length()-4,phone_number.length());
        //문자열 자르기 완료

        for(int i=0;i<phone_number.length()-4;i++){
            answer += "*";
        }

        answer+=str;

     
        return answer;

    }
}
