class Solution {

    public int solution(int num) {
   int answer = 0;
        int count = 0;
        long number = num;
        while (true) {
            if (number == 1) {
                break;
            }
            if (count == 500) {
                count = -1;
                break;
            }
            if (number % 2 == 0) {
                number = number / 2;
            } else if (number % 2 != 0) {
                number = number * 3 + 1;
            }
            count += 1;
        }
        return count;
    }
}
