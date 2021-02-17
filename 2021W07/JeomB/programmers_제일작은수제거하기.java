import java.util.Arrays;
import java.util.ArrayList;

class Solution {
        public int[] solution(int[] arr) {
        int[] answer = {};

        ArrayList<Integer> list = new ArrayList<>();
        int [] array= new int[arr.length];

        for(int i=0;i<arr.length;i++){
            array[i]=arr[i];
        }
        Arrays.sort(array);
        if(arr.length == 1||arr.length==0) {
            answer = new int[1];
            answer[0] = -1;
            return answer;
        } else {
            for (int i = 0; i < arr.length; i++) {
                if(arr[i]==array[0]) {
                    continue;
                }
                list.add(arr[i]);
            }
            answer = new int[list.size()];
            for(int i=0;i<list.size();i++){
                answer[i]=list.get(i);
            }
            return answer;
        }

    }
}
