public class Solution {
    public static String solution(String s, int n) {
        String answer = "";
        char [] arr = new char[s.length()];

        for(int i=0;i<s.length();i++){
            int num = s.charAt(i);
           if(num == 32){
               arr[i]= (char) num;
               continue;
           }
            if(num + n>90&&num<91){
                //64+n-90-num;
                arr[i]= (char) ((64+n)-(90-num));
            }else if(num + n > 122)
            {
                arr[i] = (char) ((96+n)-(122-num));
            }else {
                arr[i] = (char) (num+n);
            }
        }
        for (int j = 0; j < arr.length; j++) {
            answer+= Character.toString(arr[j]);
        }
        return answer;
    }

    public static void main(String[] args) {
      //  System.out.println(solution("Z",10)); 테스트 코드 
    }

}
