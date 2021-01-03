import java.util.HashMap;

public class programmers_위장 { 
    public static void main(String[] args) {
        String[][] arr = new String[][]{{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};
        System.out.println(solution(arr));
    }

    static int solution(String[][] clothes) {
        HashMap<String, Integer> map = new HashMap<>();
        for (int i=0; i<clothes.length; i++) {
            if (map.containsKey(clothes[i][1])) {
                int n = map.get(clothes[i][1]);
                map.put(clothes[i][1], n+1);
            } else {
                map.put(clothes[i][1], 1);
            }
        }
        int cnt = 1;
        for (int i : map.values()){
            cnt *= (i+1);
        }
        return cnt -1 ;
    }
}
