class Solution {
    public int solution(int n) {
            int answer = 0;
        String str = "";
        while (true){
            str += n%3;
            n = n/3;
            if(n<1){ break; }
        }
        answer = Integer.parseInt(str,3);

        return answer;
    }
}
