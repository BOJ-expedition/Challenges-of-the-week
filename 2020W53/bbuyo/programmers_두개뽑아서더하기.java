import java.util.ArrayList;

class Solution {
    public int[] solution(int[] numbers) {
        ArrayList<Integer> rslt = new ArrayList<>();
        int len = numbers.length;
        for(int i=0; i<len; i++) {
            for(int j=i+1; j<len; j++) {
                int tmpSum = numbers[i]+numbers[j];
                rslt.add(tmpSum);
            }
        }

        int[] result = rslt.stream().distinct().sorted().mapToInt(i->i).toArray();
        return result;
    }
}