// https://programmers.co.kr/learn/courses/30/lessons/42889#qna

package bj;

import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Solution_ s = new Solution_();
        s.solution("abcdefghijklmn.p");
    }
}

class Solution_ {
    public String solution(String new_id) {
        //  알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다
        new_id = new_id.toLowerCase()
                .replaceAll("[^\\w-\\.]", "")
                .replaceAll("[\\.]{2,}", ".")
                .replaceAll("^\\.|\\.$", "");

        if (new_id.length() == 0) {
            new_id = "a";
        }

        if(new_id.length() > 15) {
            new_id = new_id.substring(0,15).replaceAll("\\.$", "");
        }
        if (new_id.length() <= 2) {
            String last_char = String.valueOf(new_id.charAt(new_id.length()-1));

            while(new_id.length() <= 2) {
                new_id += last_char;
            }
        }
        return new_id;
    }
}

