//https://programmers.co.kr/learn/courses/30/lessons/42576
import java.util.Arrays;

public class Main {
    public static String solution(String[] participant, String[] completion) {
        Arrays.sort(participant);
        Arrays.sort(completion);

        for(int i=0; i<completion.length; i++) {
            if(!completion[i].equals(participant[i])) {
                return participant[i];
            }
        }
        return participant[participant.length -1];
    }
}
