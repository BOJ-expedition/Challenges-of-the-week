//https://programmers.co.kr/learn/courses/30/lessons/12948
public class Main4 {
    public String solution(String phone_number) {
        String temp = "";
        for(int i=0; i<phone_number.length() -4; i++) {
            temp += "*";
        }
        return phone_number.replaceAll(phone_number.substring(0,phone_number.length() -4),temp);
    }
}
