// https://programmers.co.kr/learn/courses/30/lessons/17686

import java.util.*;
import java.util.regex.Pattern;

public class Solution {
    public static void main(String[] args) {
        Solution_ s = new Solution_();
        String[] files = new String[]{"img12.png", "img10.png", "img02.png", "img1.png", "IMG01.GIF", "img2.JPG"};
        s.solution(files);
    }
}

class Solution_ {
    public String[] solution(String[] files) {
        ArrayList<FileInfo> list = new ArrayList<>();
        Pattern pattern = Pattern.compile("\\d");

        final int filesLength = files.length;
        String[] head = new String[filesLength];
        int[] number = new int[filesLength];
        String[] tail = new String[filesLength];

        int[] firstInt = new int[filesLength];

        for (int i=0; i<files.length; i++) {
            String file = files[i];

            // 숫자 첫 위치 찾기
            for (int j = 0; j < file.length(); j++) {
                String letter = String.valueOf(file.charAt(j));
                if (pattern.matcher(letter).matches()) {
                    firstInt[i] = file.indexOf(letter);
                    break;
                }
            }
            // 첫 숫자 이전까지 문자열 head 배열에 입력
            head[i] = file.substring(0, firstInt[i]);

            // number+tail 로 이루어진 문자열 나누기
            StringBuffer sbNum = new StringBuffer();
            StringBuffer sbTail = new StringBuffer();
            boolean fromNowTail = false;
            String leftstr = file.substring(firstInt[i]);
            for (int j=0; j<leftstr.length(); j++) {
                if (j>=5 || !pattern.matcher(String.valueOf(leftstr.charAt(j))).matches()) {
                    sbTail.append(leftstr.charAt(j));
                    fromNowTail = true;
                } else {
                    if (!fromNowTail) {
                        sbNum.append(leftstr.charAt(j));
                    }
                }
            }
            number[i] = Integer.parseInt(sbNum.toString());
            tail[i] = sbTail.toString();

            list.add(new FileInfo(file, i, head[i], number[i], tail[i]));
        }

        Collections.sort(list);
        String[] answer = {};
        answer = new String[list.size()];
        for (int i=0; i<answer.length; i++) {
            answer[i] = list.get(i).fileName;
            System.out.println(answer[i]);
        }
        return answer;
    }
}

class FileInfo implements Comparable<FileInfo> {
    public String fileName;
    public int fileIndex;
    public String head;
    int number;
    public String tail;

    public FileInfo(String fileName, int fileIndex, String head, int number, String tail) {
        this.fileName = fileName;
        this.fileIndex = fileIndex;
        this.head = head;
        this.number = number;
        this.tail = tail;
    }

    @Override
    public int compareTo(FileInfo o) {

        if (this.head.toLowerCase().compareTo(o.head.toLowerCase()) > 0){
            return 1;
        } else if (this.head.toLowerCase().compareTo(o.head.toLowerCase())==0) {
            if (this.number - o.number > 0) {
                return 1;
            } else if (this.number - o.number == 0) {
                return this.fileIndex - o.fileIndex;
            }
        }

        return -1;
    }
}
