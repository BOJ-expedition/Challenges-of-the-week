
import java.util.stream.Stream;

class Solution {
    public boolean solution(int x) {
     boolean answer = true;

        int[] arr = Stream.of(String.valueOf(x).split("")).mapToInt(Integer::parseInt).toArray();
        int sum =0;

        for(int i=0;i< arr.length;i++){
            sum += arr[i];
        }

        if(x%sum!=0){
            answer = false;
        }

        return answer;
    }
}
