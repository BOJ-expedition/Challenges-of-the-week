import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;

class Solution {
    public int[] solution(int[] numbers) {
    
        int[] answer = {};
        HashSet<Integer> arr = new HashSet<Integer>();

        for (int i = 0; i < numbers.length; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                int num = numbers[i] + numbers[j];
                    arr.add(num);
            }
            }
            List arrayList = new ArrayList<>(arr);

        answer = new int[arr.size()];

        for(int i = 0;i<answer.length;i++){
            answer[i]= (int) arrayList.get(i);
        }

        Arrays.sort(answer);

            return answer;
        }
}
