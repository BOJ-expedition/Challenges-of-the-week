class Solution {
    public int[] solution(long n) {
        String str = String.valueOf(n);
        StringBuffer strb = new StringBuffer(str);
        str = strb.reverse().toString();
        String [] arr = str.split("");
        int[] answer = new int[arr.length];
        for(int i=0;i<arr.length;i++){
            answer[i] = Integer.parseInt(arr[i]);
        }
        return answer;
    }
}
