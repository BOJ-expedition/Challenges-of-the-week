import java.util.ArrayList;
import java.util.Stack;

class Solution {
    public static int solution(int[][] board, int[] moves) {
        int answer = 0;
       Stack<Integer> list = new Stack<>(); // 꺼낸거 담기

        for(int i=0; i<moves.length;i++){
            for(int j=0; j<board.length;j++) { //
                if (board[j][moves[i] - 1] != 0) {
                    if(list.empty()){
                        list.push(board[j][moves[i] - 1]);
                        board[j][moves[i] - 1]=0;
                        break;
                    }
                    else if(list.peek()==board[j][moves[i] - 1]){
                        board[j][moves[i] - 1]=0;
                        list.pop();
                        answer+=2;
                        break;
                    }else {
                        list.push(board[j][moves[i] - 1]);
                        board[j][moves[i] - 1]=0;
                        break;
                    }
                }
            }
        }

        return answer;
    }
}
