import java.util.Arrays;
import java.util.Collections;

class Solution {
 public static long solution(long n) {
        long answer = 0;
        String str = Long.toString(n);
        String[] strArr = str.split("");
        // System.out.println(str);
        Integer[] arr = new Integer[str.length()];

        for (int i = 0; i < str.length(); i++) {
            Integer num = Integer.parseInt(strArr[i]);
            arr[i] = num;
        }

        Arrays.sort(arr,Collections.reverseOrder());


        String last = Arrays.toString(arr).replaceAll("[^0-9]","");
        answer = Long.parseLong(last);

        return answer;
    }
}
