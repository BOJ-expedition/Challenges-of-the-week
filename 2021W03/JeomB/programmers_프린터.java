
import java.util.ArrayList;

public class Pro {
    public static int solution(int[] priorities, int location) {
        int answer = 0;

        ArrayList<Integer> list = new ArrayList();

        for (int i = 0; i < priorities.length; i++) {
            list.add(priorities[i]);
        }

        while (true) {
            int max = list.get(0);
            boolean test = false;

            for (int i = 0; i < list.size(); i++) {
                if (max < list.get(i)) {
                    test = true;
                    break;
                }
            }

            if(!test){ //자기보다 큰문서가 없을경우
                list.remove(0);
                answer++;
                if(location==0){
                    break;
                }else {
                    location-=1;
                }
            }

            if(test){
                list.add(max);
                list.remove(0);  //자기보다 큰문서가 있을경우
                if(location==0){
                    location=list.size()-1;
                }else {
                    location-=1;
                }
            }

          /*  if(list.size()==0){
                break;
            } */
        }

        return answer;
    }

    public static void main(String[] args) {
        int[] arr = {2,1,3,2};
        System.out.println(solution(arr, 2));
    }
}
