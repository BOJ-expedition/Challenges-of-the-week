//https://programmers.co.kr/learn/courses/30/lessons/42578

import java.util.HashMap;
import java.util.Map;

public class Main {

    /*
        clothes의 각 행은 [의상의 이름, 의상의 종류]로 이루어져 있습니다.
        스파이가 가진 의상의 수는 1개 이상 30개 이하입니다.
        같은 이름을 가진 의상은 존재하지 않습니다.
        clothes의 모든 원소는 문자열로 이루어져 있습니다.
        모든 문자열의 길이는 1 이상 20 이하인 자연수이고 알파벳 소문자 또는 '_' 로만 이루어져 있습니다.
        스파이는 하루에 최소 한 개의 의상은 입습니다.
     */

    public static void main(String[] args) {
//        int[][] arr = { {1,2,3} , {5,6,7} };
//
//        for(int i=0; i< arr.length; i++) {
//            for(int j=0; j< arr[i].length; j++) {
//                System.out.println(i + " "  + j + " = " + arr[i][j]);
//            }
//
//        }
//        System.out.println(arr.length);
//        System.out.println(arr[0][2]);

        String[][] arr2 = {{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};
        System.out.println(solution(arr2));

    }

    public static int solution(String[][] clothes) {

        Map<String , Integer> resultMap = new HashMap<>();
        // ************* 같은 이름을 가진 의상은 존재하지 않습니다.
        // ************* clothes의 각 행은 [의상의 이름, 의상의 종류]로 이루어져 있습니다.
        for(int i=0; i<clothes.length; i++) {
            if(!resultMap.containsKey(clothes[i][1])) { // 존재하지 않으면 true
                resultMap.put(clothes[i][1],1); //기본 1개추가
            } else { //존재하면
                resultMap.put(clothes[i][1],resultMap.get(clothes[i][1]) +1 ); //현재값 ++
            }
        }

        int answer = 1;
        for(int i : resultMap.values()) {
            answer = answer * (i + 1);
        }


        return answer - 1;
    }

}
