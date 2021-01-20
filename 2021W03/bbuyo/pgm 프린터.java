// https://programmers.co.kr/learn/courses/30/lessons/42587

import java.util.*;

class Solution{
    public int solution(int[] properties, int location) {
        Deque deque = new ArrayDeque();
        int location_ = location;
        for (int i=0; i<properties.length; i++) {
            deque.addLast(properties[i]);
        }

        int cnt = 0;
        while (!deque.isEmpty()) {
            int current_num = (int) deque.pop();
            boolean isBigNumLeft = findBigNum(deque, current_num);
            if (isBigNumLeft) {
                deque.addLast(current_num);
                --location_;
                if (location_ < 0) {
                    location_ = deque.size()-1;
                }
            } else {
                ++cnt;
                if (location_ == 0) {
                    System.out.println(cnt);
                    return cnt;
                }
                --location_;
            }
        }
        return 0;
    }

    public static boolean findBigNum(Deque deque, int current_num) {
        Optional bigNum = deque.stream().filter(item -> (int)item > current_num).findFirst();
        return bigNum.isPresent();
    }
}