class Solution {
    public int[] solution(int N, int[] stages) {
        int[] answer = new int[N];
        double[] arr = new double[N]; // 스테이지 리턴할 배열

        /*
        n -> 스테이지 갯수
        n+1은 전부 클리어함
        스테이지 없을경우 해당 스테이지 실패율 0
         */

        for (int i = 1; i <= N; i++) {
            int num = 0;
            int count = 0;
            for (int j = 0; j < stages.length; j++) {
                if (i <= stages[j]) {
                    count += 1;
                }
                if (i == stages[j]) {
                    num++;
                }
            }
            if (count==0) {
                arr[i - 1] = 0;
                continue;
            }
            //    System.out.println(arr[i-1]);
            arr[i - 1] = (double) num / count;
            System.out.println(arr[i - 1]);
        }

        // 실패율이 높은 스테이지 부터 정렬 같을경우 작은 번호 스테이지 앞

        for (int j = 0; j < arr.length; j++) {
            double max = arr[0];
            int max_index = 0;
            for (int i = 0; i < arr.length; i++) {
                if (max < arr[i]) {
                    max = arr[i];
                    max_index = i;
                }
            }
            arr[max_index] = -1;
            answer[j] = max_index + 1;
            //     System.out.println(max_index+1);
        }


        return answer;
    }
}
