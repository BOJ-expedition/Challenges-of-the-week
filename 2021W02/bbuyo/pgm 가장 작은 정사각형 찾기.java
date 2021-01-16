//https://programmers.co.kr/learn/courses/30/lessons/12905?language=java

class Solution_ {
    public int solution(int [][]board) {
        int width = board[0].length;
        int height = board.length;
        for (int x=1; x<height; x++) {
            for (int y=1; y<width; y++) {
                if (board[x][y]==1) {
                    board[x][y] = Math.min(board[x-1][y-1], Math.min(board[x-1][y], board[x][y-1]))+1;
                }
            }
        }

        int maxValue = 0;
        for (int x=0; x<height; x++) {
            for (int y=0; y<width; y++) {
                if (maxValue < board[x][y]) {
                    maxValue = board[x][y];
                }
            }
        }

        return (int) Math.pow(maxValue, 2);
    }
}
