class Solution {
   public long[] solution(int x, int n) {
        long[] answer = {};
        long a = 0;
        answer = new long[n];

        for(int i=0;i<n;i++){
            answer[i]=a+x;
            a+=x;
        }
        return answer;
    }

}
