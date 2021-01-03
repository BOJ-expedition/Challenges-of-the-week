//https://programmers.co.kr/learn/courses/30/lessons/12906?language=java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        int[] arr = {4,4,4,3,3};
        System.out.println(Arrays.toString(solution(arr)));
    }

    public static int[] solution(int [] arr) {

        ArrayList<Integer> arrayList = new ArrayList<>();

        int num = -1;

        for(int i=0; i<arr.length; i++) {
            if(num != arr[i]) {
                arrayList.add(arr[i]);
            }
            num = arr[i];
        }

        int[] answer = new int[arrayList.size()];

        for(int i=0; i< arrayList.size(); i++) {
            answer[i] = arrayList.get(i);
        }

        return answer;
    }

}
